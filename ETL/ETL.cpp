#include "ETL.h"

#include <vector>
#include <stdlib.h>
#include <cmath>
#include <boost/algorithm/string.hpp>


std::vector<std::vector<std::string>> ETL::readCSV(){
    //Parse CSV file
    std::ifstream file(name);
    std::vector<std::vector<std::string>> dataString;

    std::string line= "";

    while(getline(file, line)){
        std::vector<std::string> vec;
        boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
        dataString.push_back(vec);
    };

    file.close();
    return dataString;
}

Eigen::MatrixXd ETL::CSVtoEigen(std::vector<std::vector<std::string>> dataset, int cols, int rows){
    if(header==true){
        rows =-1; 
    }

    Eigen::MatrixXd mat(cols, rows); 
    
    for(int i = 0;i< rows; i++ ){ 
        for(int j=0; j < cols; j++){ 
            mat(j,i) = atof(dataset[i][j].c_str());
    }
    }
    return mat.transpose();
}

auto ETL::Mean(Eigen::MatrixXd data) -> decltype(data.colwise().mean()){
    return data.colwise().mean():
}

auto ETL::Std(Eigen::MatrixXd data) -> decltype(sqrt(data.colwise().mean()))
