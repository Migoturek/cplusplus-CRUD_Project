cmake_minimum_required(VERSION 3.14)
project(student-database)
add_executable(${PROJECT_NAME} src/main.cpp src/database.cpp src/student.cpp) 
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror -std=c++20)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#sciąganie google testa z githuba
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(   ${PROJECT_NAME}-ut   src/testy.cpp src/database.cpp src/student.cpp)
target_compile_options(${PROJECT_NAME}-ut PRIVATE -Wall -Wextra -Wpedantic -Werror -std=c++20)
target_link_libraries(  ${PROJECT_NAME}-ut  gtest_main )

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)


