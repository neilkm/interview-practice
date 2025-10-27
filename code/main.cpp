#include <iostream>
#include "bst.h"
#include "palindrome.h"
#include "find_missing.h"

// LeetCode classes
BinarySearch::Solution binarySearch;
Palindrome::Solution palindrome;

// October OA classes
FindMissing::Solution findMissing;

int main(int argc, char* argv[]) 
{
    std::cout << "Interview Prep" << std::endl
        << std::endl << "Neil's interview prep project output"
        << std::endl << "Main function called from: " << __FILE__ 
        << std::endl << "Compiled on: " << __DATE__
        << std::endl << __TIME__ << std::endl;

    std::cout << "\n\n--- Starting ---" << std::endl;
    // -- run tests here --

    //Binary search
    std::cout << "\n\n--- LeetCode Library: ---" << std::endl;
    binarySearch.testBst(); 

    //Palindrome
    palindrome.testPalindrome();
    
    std::cout << "\n\n--- Problems from Online assessment taken on October 19, 2025: ---" << std::endl;
    //Find missing
    findMissing.testFindMissing();

    // -- end of tests --
    std::cout << "Finished." << std::endl
        << "------ End of Output ------\n\n" << std::endl;
	return 0;
}
