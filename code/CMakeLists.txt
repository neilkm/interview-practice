# minimum cmake version
# cmake_minimum_required(VERSION 4.1.1)
cmake_minimum_required(VERSION 3.2.2)

set(TARGET InterviewPrep)

# project name and languages used
project(${TARGET} LANGUAGES CXX)

# set cpp standard
set(CMAKE_CXX_STANDARD 17) # switch this to 26?
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # only relies on standard C++ features (-std=c++17 instead of -std=gnu++17)

# include subdirectories
add_subdirectory(LeetCode)
add_subdirectory(OA_October)
add_subdirectory(SharedLib)

# executable target from source file
add_executable(InterviewPrep main.cpp)

# link libraries
target_link_libraries(
    ${TARGET} PRIVATE 
    LeetCode
    OA_October
    Solution
)
