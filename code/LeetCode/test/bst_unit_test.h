#include "bst.h"
#include <vector>
#include <string>
#include <iostream>

namespace BinarySearch
{
	class Solution;

	auto solution = Solution();

	struct TestCase {
			std::string testName;
			std::vector<int> nums;
			int target;
			int expected;
	};

	std::vector<TestCase> bstTestCases = 
	{
		{"Odd nums existing target", {1,2,3,4,5}, 3, 2},
		{"Even nums existing target", {1,2,3,4}, 3, 2},
		{"Odd nums middle non existing target", {1,2,4,5,6}, 3, 2},
		{"Even nums middle non existing target", {1,2,4,5}, 3, 2},
		{"Odd nums high non existing target", {1,2,3,4,5}, 6, 5},
		{"Even nums high non existing target", {1,2,4,5}, 6, 4},
		{"Odd nums low non existing target", {1,2,3,4,5}, 0, 0},
		{"Even nums low non existing target", {1,2,3,4}, 0, 0},
		//{"Fail Case unordered input", {9,2,6,4}, 4, 0}, //explain why this passes
		//come up with real fail case
	};

	void testBst() {
		std::cout << "Running Tests testBst():" << std::endl;
		
		int totalCaseCount = bstTestCases.size();
		std::cout << totalCaseCount << " test cases found." << std::endl;

		int passed = 0;
		for(int i = 0; i < totalCaseCount; i++) {
			auto testCase = bstTestCases[i];
			std::cout << "case: " << testCase.testName << std::endl;
			
			int result = solution.searchInsert(testCase.nums,testCase.target);
			if(result == testCase.expected) {
				passed++;
				std::cout << "PASSED" << std::endl;
			} else {
				std::cout << "FAILED" << std::endl;
				std::cout << "Expected: " << testCase.expected << std::endl;
				std::cout << "Received: " << result << std::endl; 
			}
		}
		std::cout << passed << "/" << totalCaseCount << " cases passed." << std::endl;
	}
}//namespace
