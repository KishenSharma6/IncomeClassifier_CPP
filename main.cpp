#include "ETL/ETL.h"

#include <iostream>
#include <string>
#include <eigen3/Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>

int main(int argc, char *argv[]){
    ETL etl(argv[1], argv[2], argv[3]);

    std::vector<std::vector< std::string>> dataSet = etl.readCSV();

    int cols= dataSet[0].size();
    int rows=dataSet.size();
    std::cout << cols << std::endl;
    std::cout << rows << std::endl;
    
    Eigen::MatrixXd test=  etl.CSVtoEigen(dataSet, cols, rows);
    
    std::cout << test <<std::endl;
    return EXIT_SUCCESS;
}