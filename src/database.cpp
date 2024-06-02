#include "database.hpp"
#include <iostream>
bool Database::add(const Student & s){
    if (isAdded_) {
        return false;

    } else {
        isAdded_= true;
        return true;
    }
    // return !isAdded_; można tak uprościć


}

 void Database::display() const {
    std::cout<<show();
 }

 std::string Database::show() const 
 {
return "";

 }