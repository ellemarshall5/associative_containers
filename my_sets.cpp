#include <iostream>
#include <set>

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);

    //print size
    std::cout << "The set has " << numbers.size() << " elements" << std::endl;
    // find a value
    if(numbers.find(10) != numbers.end()){
        std::cout << "10 is in numbers" << std::endl;
    }

    //loop
    std::cout << "using built in begin and end function" << std::endl;
    for(auto it = std::begin(numbers); it != std::end(numbers); it++){
        std::cout << *it << std::endl;
    }

    //range based
    std::cout << "using range based" << std::endl;
    for(const auto &value: numbers){
        std::cout << value << std::endl;
    }


}