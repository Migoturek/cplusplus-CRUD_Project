#include "database.hpp"
#include <iostream>

void Database::add(const Student & s){
   
   students_.push_back(s);
    

}

 void Database::display() const {
    std::cout<<show();
 }

 std::string Database::show() const 
 {
    std::string result="";
    for(auto && student : students_){ //iterujremy się po studencie i na każdym jego elemencie wywołujemy metode show()
        result+=student.show();
    }
return result;

 }