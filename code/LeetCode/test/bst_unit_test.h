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
	};

	void testBst() {
		std::cout << "Running Tests testBst():" << std::endl;
		
		int totalCaseCount = bstTestCases.size();
		std::cout << totalCaseCount << " test cases found." << std::endl;

		int passed = 0;
		for(int i = 0; i < totalCaseCount; i++) {
			auto testCase = bstTestCases[i];
			std::cout << "case: " << testCase.testName << std::endl;

			if(solution.searchInsert(testCase.nums,testCase.target) == testCase.expected) {
				passed++;
				std::cout << "PASSED" << std::endl;
			} else {
				std::cout << "FAILED" << std::endl;
			}
		}
		std::cout << passed << "/" << totalCaseCount << " cases passed." << std::endl;
	}
}//namespace
