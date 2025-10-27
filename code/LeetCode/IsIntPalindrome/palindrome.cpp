#include "palindrome.h"

namespace Palindrome
{
// -- My answer --
	bool Solution::isPalindrome(int x) {
		if (x < 0) return false;

		int remainder = x;
		int reversed = 0;

		while(remainder) {
			reversed = reversed*10 + remainder%10;
			remainder /= 10;
		}
		return reversed == x;
	}
// -- End answer --
	void Solution::testPalindrome() {
        std::cout << m_problem_intro << std::endl;
        std::cout << "Running Tests testPalindrome():" << std::endl;
		
		int totalCaseCount = testCases.size();
		std::cout << totalCaseCount << " test cases found." << std::endl;

		int passed = 0;
		for(int i = 0; i < totalCaseCount; i++) {
			auto testCase = testCases[i];
			std::cout << "Test: " << testCase.testName << " ---";
			
        auto result = isPalindrome(testCase.n);
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
