#include "bst.h"
#include <vector>

namespace BinarySearch
{
// -- My answer --
	int Solution::searchInsert(std::vector<int> nums, int target)
	{
		int left = 0;
		int right = nums.size();
		int curr;

		if(nums[right - 1] < target) return right;

		while(left <= right) {
			curr = (left + right) / 2;
			if(nums[curr] == target) return curr;

			if(nums[curr] > target) {
				right = curr - 1;
			} else {
				left = curr + 1;
			}
		}
		return left;
	}
// -- End answer --



	void Solution::testBst() {
        std::cout << m_problem_intro << std::endl;
		std::cout << "Running Tests testBst():" << std::endl;
		
		int totalCaseCount = bstTestCases.size();
		std::cout << totalCaseCount << " test cases found." << std::endl;

		int passed = 0;
		for(int i = 0; i < totalCaseCount; i++) {
			auto testCase = bstTestCases[i];
			std::cout << "Test: " << testCase.testName << " ---";
			
			int result = searchInsert(testCase.nums,testCase.target);
			if(result == testCase.expected) {
				passed++;
				std::cout << "PASSED" << std::endl;
			} else {
				std::cout << "FAILED" << std::endl;
				std::cout << "Expected: " << testCase.expected << std::endl;
				std::cout << "Received: " << result << std::endl; 
			}
		}
		std::cout << passed << "/" << totalCaseCount << " cases passed." 
        << std::endl;
	}

}//namespace
