#pragma once 
#include <string>


enum class Gender{
    Male,
    Female
};

class Student{

public:
    Student(std::string name,
    std::string LastName,
    std::string address,
    int indexNumber,
    std::string pesel,
    Gender gender);

private:
    Gender g;
};