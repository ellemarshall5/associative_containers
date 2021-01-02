#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<int, std::string> teams;
    teams.insert(std::make_pair(99, "waldo weber"));
    teams.insert(std::make_pair(22, "utah jazz"));

    std::cout << "Size is " << teams.size() << std::endl;
    //find element
    auto position = teams.find(22);
    if(position != teams.end()){
        std::cout << "found. the key is " << position->first << ", and the value is " << position->second << std::endl;
    }

    std::cout << "using built in begin and end function" << std::endl;
    for(auto it = std::begin(teams); it != std::end(teams); it++){
        std::cout << it->first << " " << it->second << std::endl;
    }

    //range based
    std::cout << "using range based" << std::endl;
    for(const auto &value: teams){
        std::cout << value.first << " " << value.second << std::endl;
    }



    return 0;
}