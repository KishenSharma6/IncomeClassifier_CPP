#include "ETL/ETL.h"

#include <iostream>
#include <string>
#include <eigen3/Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>

int main(int argc, char *argv[]){
    ETL etl(argv[1], argv[2], argv[3]);
    

    return EXIT_SUCCESS;
}