#include <string>
#include <iostream>
#include <vector>

namespace Palindrome
{
	class Solution
	{
		public:
             //problem intro
            std::string m_problem_intro = 
            R"(
Palindrome Integer:

Given an integer, return if the digits reversed result in the same number.
            )";

			//return true if integer with digits reversed is the same number
			bool isPalindrome(int x);

            struct TestCase {
                std::string testName;
                int n;
                bool expected;
            };

            std::vector<TestCase> testCases = {
                {"single digit", 1, true},
                {"odd digit true", 131, true},
                {"odd digit false", 123, false},
            };

            //test harness
            void testPalindrome();
	};
}//namespace
