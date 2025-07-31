// This file contains helper functions that are used in each excercise.

#include <iostream>
#include <string>

inline void endOfExcercise(std::string excercise_number)
{
    std::cout << std::endl
              << "-------------------------------------------------------------------------------" << std::endl
              << "End of the excercise " << excercise_number << "."
              << std::endl 
              << "-------------------------------------------------------------------------------" << std::endl
              << std::endl;
}
