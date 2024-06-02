#include "student.hpp"


 Student::Student(
    std::string name ,
    std::string LastName ,
    std::string address ,
    int indexNumber ,
    std::string pesel ,
    Gender gender
    ) 
    :name_(name), 
    LastName_(LastName), 
    address_(address),
    indexNumber_(indexNumber), 
    pesel_(pesel), 
    gender_(gender)   //do name skopiuj name itd
{}

std:: string Student::show() const {
    return name_ + " " + LastName_ + "; " + address_ + "; " + std::to_string(indexNumber_) + "; " + pesel_ + "; " + "Male";
}