//#include "csvstream.h"
#include "containers.h"
#include <iostream>
//#include <string>
//#include <map>

// Main Function
int main()
{
//  //open file
//  csvstream csvin("../../data/input.csv");
//  std::map<std::string, std::string> row;
//
//  while(csvin >> row){
//      std::cout << row["animal"] << std::endl;
//      std::cout << row["id"] << std::endl;
//      std::cout << row["name"] << std::endl;
// }

    //create container
    std::vector<Data> pet_owners;
    std::string in_file = "../../data/input.csv";

    //load owners
    Load_Data(pet_owners, in_file);
    for(const auto &value: pet_owners){
        std::cout << value.id << "\t" << value.name << "\t" << value.animal << std::endl;
    }

  return 0;
}