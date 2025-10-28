# CMake for LeetCode directory

# Create a static library for this module
add_library(LeetCode
    SearchInsert/bst.cpp
    IsIntPalindrome/palindrome.cpp
)

# Public include directories for headers
target_include_directories(LeetCode PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/SearchInsert
    ${CMAKE_CURRENT_SOURCE_DIR}/IsIntPalindrome
    ${CMAKE_CURRENT_SOURCE_DIR}/../Solution
)

# Test executable for LeetCode
add_executable(LeetCode_tst main.cpp)

# Link test executable to this module's library
target_link_libraries(LeetCode_tst PRIVATE 
    LeetCode
    Solution
)

