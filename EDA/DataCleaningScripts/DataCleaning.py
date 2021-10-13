import pandas as pd
import numpy as np

def find_missing_values(dataframe):
    """Update '?' to NaN values
    Args:
        dataframe (pandas.core.frame.DataFrame): Pandas dataframe

    Returns:
        pandas.core.frame.DataFrame): Pandas dataframe
    """
    assert type(dataframe) == pd.core.frame.DataFrame,  "Not a pandas dataframe"

    copy= dataframe.copy()
    #Replace ?'s with NaN
    for col in copy.columns:
        copy[col] = copy[col].replace({'?': np.nan})

    return copy
