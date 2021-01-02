#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>

/**
 * @brief load data from file into a vector of data objects
 * @param data : reference to a structure of data objects
 * @param input_file : reference to location of data file
 */
void Load_Data(std::vector<Data> &data, const std::string &input_file){
    Data temp; //temp object to hold data
    //open file
    csvstream csvin(input_file);
    //rows have key = col name, value = cell data
    std::map<std::string, std::string> row;
    //get the data
    while(csvin >> row){
        temp.id = std::stoi(row["id"]);
        temp.name = row["name"];
        temp.animal = row["animal"];
        //std::cout << "id: " << temp.id << " " << temp.animal << std::endl;
        //  add record to vector
        data.push_back(temp);
    }


}
