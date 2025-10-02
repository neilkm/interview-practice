#include "palindrome.h"
#include <vector>
#include <iostream>
#include <string>

namespace Palindrome
{
	class Solution;

	auto solution = Solution();


struct TestCase {
	std::string testName;
	int testVal;
	bool expected;
};

std::vector<TestCase> palindromeTestCases =
{
	{"single digit", 5, true},
	{"two digits same number", 55, true},
	{"negative number", -5, false},
	{"non palindrome number", 25, false},
};

void testPalindrome() {
		std::cout << "Running Tests testPalindrome():" << std::endl;
		
		int totalCaseCount = palindromeTestCases.size();
		std::cout << totalCaseCount << " test cases found." << std::endl;

		int passed = 0;
		for(int i = 0; i < totalCaseCount; i++) {
			auto testCase = palindromeTestCases[i];
			std::cout << "case: " << testCase.testName << std::endl;
			
			auto result = solution.isPalindrome(testCase.testVal);
			if(result == testCase.expected) {
				passed++;
				std::cout << "PASSED" << std::endl;
			} else {
				std::cout << "FAILED" << std::endl;
				std::cout << "Expected: " << testCase.expected << std::endl;
				std::cout << "Received: " << result << std::endl; 
			}
		}
		std::cout << passed << "/" << totalCaseCount << " cases passed." << std::endl
<< std::endl << std::endl;
	}

}//namespace

