#ifndef ETL_h
#define ETL_h

#include <iostream>
#include <fstream>
#include <eigen3/Eigen/Dense>

class ETL {

    std::string name; //name of dataset
    std::string delimiter; // delimiter used by data
    bool header; //header flag

public:
    ETL(std::string data, std::string seperator, bool colName): name(data), delimiter(seperator), header(colName)
    {
        std::cout << "ETL object created" << std::endl;
    };

    std::vector<std::vector<std::string>> readCSV();

    Eigen::MatrixXd CSVtoEigen(std::vector<std::vector<std::string>> dataset, int cols, int rows);


};



#endif