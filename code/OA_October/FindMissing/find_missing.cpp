#include "find_missing.h"

namespace PracticeProblems
{
// -- My answer --
int FindMissing::findMissing(std::vector<int> nums, int n)
	{
        int expected = nums[0] + (n-1); //expected end value
        if (nums[-1] == expected) return 0; //none missing
        if (nums[-1] < expected) return -1; //test case has issue, extra number
        
        int left = 0;
        int right = nums.size();
        int curr;

        while(left <= right) {
            curr = (left+right)/2;
            expected = nums[0] + curr;
            if (nums[curr] > expected) {
                right = curr - 1;
            } else {
                left = curr + 1;
            }
        }
        return nums[left-1]+1;
	}
// -- End answer --
	void FindMissing::testFindMissing() {
        std::cout << m_problem_intro << std::endl;
        std::cout << "Running Tests testFindMissing():" << std::endl;
		
		int totalCaseCount = findMissingTestCases.size();
		std::cout << totalCaseCount << " test cases found." << std::endl;

		int passed = 0;
		for(int i = 0; i < totalCaseCount; i++) {
			auto testCase = findMissingTestCases[i];
			std::cout << "Test: " << testCase.testName << " ---";
			
        int result = findMissing(testCase.nums,testCase.n);
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
