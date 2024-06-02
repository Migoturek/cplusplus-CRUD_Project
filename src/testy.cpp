#include <gtest/gtest.h>
#include "database.hpp" 
#include "student.hpp"
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(CheckStructure, CanAddStudentToDbV1){
    Student adam{
        "Adam",
        "Kowalski",
        "ul. Paryska 134, 12-345 Kraków",
        123456,
        "12345678901",
        Gender::Male
        };

    Database db;
    
    EXPECT_TRUE(db.add(adam));
    EXPECT_FALSE(db.add(adam));


}

TEST(DisplayDb, DisplayEmptyDb){
     Database db;
     auto content = db.show();
     auto expected = "";
     EXPECT_EQ(content, expected);
     db.display();
}

