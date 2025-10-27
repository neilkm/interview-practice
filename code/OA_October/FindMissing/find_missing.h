#include <string>
#include <vector>
#include <iostream>

namespace FindMissing 
{

	class Solution
	{
		public:
            //problem intro
            std::string m_problem_intro = 
            R"(
Find Missing:

Given an ascending order vector of nums and n number of distinct values. 
Return the missing number if present or 0 if none missing.
            )";

			//given an ordered vector of nums and a length int, return the missing number, or 0 if none missing
            int findMissing(std::vector<int> nums, int n);
            
            struct TestCase {
    			std::string testName;
	    		std::vector<int> nums;
		    	int n;
			    int expected;
	        };

            std::vector<TestCase> findMissingTestCases = {
                {"none missing", {1,2,3,4}, 4, 0},
                {"middle missing", {1,2,4,5}, 4, 3},
	        };
    
            //test harness
	        void testFindMissing();
	};
}//namespace

