// Secure Coding in C++
// Exercise 01_03
// Safer Alternatives in Modern C++, by Eduardo Corpeño

#include <array>   
#include <fstream>
#include <iostream>
#include <string>   

#include "../../../inc/helper.hpp"

int main(){

    // 1. Don't use raw pointers for dynamic memory. Use std string 
    //    instead that manages memory allocation internally securely.
    std::string name {"Abhishek"};
    std::cout << "Name: " << name << std::endl;

    // 2. Don't use C-style arrays with fixed size. Use std array 
    //    intead that checks for out of bounds. 
    std::array<int,5> scores {95, 88, 76, 100, 67};
    try
    {
        std::cout << "Accessing 6th score (out of bounds): " << scores.at(5) << std::endl;  
    }
    catch(const std::out_of_range& error)
    {
        std::cerr << error.what() << '\n';
    }
    

    // 3. Dont use Manual resource management (FILE*). Intead rely on the 
    //    std ofstream that make sure internally that file is closed after 
    //    it is used. 
    std::string filename {"sample.txt"};
    std::ofstream file(filename);  
    if (file.is_open()){
        file <<"This is a test.\n";
    }
    else
    {
        std::cerr << "Error opening file: " << filename << std::endl;
    }

    // std::cout << "End of the excercise 01_03."<< std::endl << std::endl;
    endOfExcercise("01_03");
    return 0;
}
