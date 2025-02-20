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
    std::string show() const;

private:
    std::string name_;
    std::string LastName_;
    std::string address_;
    int indexNumber_;
    std::string pesel_;
    Gender gender_;
};
