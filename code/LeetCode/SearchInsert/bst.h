#include <iostream>
#include <string>
#include <vector>

namespace BinarySearch 
{

	class Solution
	{
		public:

        std::string m_problem_intro = 
        R"(
Search Insert:

Given a ascending order sorted vector of ints and a target number, find the index
of where the target number is in the vector, or the index of where it should be inserted
if missing.
        )";
			//given an ordered vector of nums and a target int, return the index of where the target exists or should be inserted
			int searchInsert(std::vector<int> nums, int target);
            
            //test harness
            void testBst();

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
	};

}//namespace

