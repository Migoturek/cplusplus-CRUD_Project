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

struct DatabaseTest : ::testing::Test //dziedziczdenie odnoszenie się do pul daje to framework gtest 
{
  Database db;
};


TEST_F(DatabaseTest, DisplayEmptyDb){
    
     auto content = db.show();
     auto expected = "";
     EXPECT_EQ(content, expected);

}

TEST_F(DatabaseTest, DisplayDb){


Student adam{
"Adam",
"Kowalski",
"ul. Paryska 134, 12-345 Krakow",
123456,
"12345678901",
Gender::Male
};
db.add(adam);
//sprawdza dodawanie tej samej osoby 2 razy
    
auto content = db.show();
auto expected = "Adam Kowalski; ul. Paryska 134, 12-345 Krakow; 123456; 12345678901; Male";
EXPECT_EQ(content, expected);


}
