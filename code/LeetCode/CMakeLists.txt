# Cmake for LeetCode directory

# library target for use by top level app
add_library(LeetCode
	SearchInsert/bst.cpp 
	IsIntPalindrome/palindrome.cpp 
    # make a header for the test with test class declaration
    # make a cpp for the test class with implementation
    # include header and call methods in main to run tests for this dir build/run
    # add_library with test class cpp
    # include test class header in higher level main
    # run method to show all tests output
)

# public headers in include/
target_include_directories( LeetCode PUBLIC 
	${CMAKE_CURRENT_SOURCE_DIR}/SearchInsert
	${CMAKE_CURRENT_SOURCE_DIR}/IsIntPalindrome
)

add_executable(LeetCode_tst main.cpp)
target_link_libraries(LeetCode_tst PRIVATE LeetCode)

