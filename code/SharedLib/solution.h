#include <string>
#include <iostream>
#include <cstdio>
#include <vector>

namespace PracticeProblems {

void printLine(std::string lineStr); 
std::string elideString(std::string str, int length);
void startTestHarness(std::string problemIntro, int caseCount);
void printTestCaseResult(std::vector<std::string> caseResult, bool passed);
void endTestHarness(int passed, int totalCases);

/*
 * Class: Solution
 *
 * template class for all cpp problem classes to inherit
 * with overridable methods
 *
 */
class Solution
{
public:
Solution();

//problem needed to be solved, meant to be overrided
int problem(int x);

private:

//test case holder, meant to be overrided
struct TestCase {
    std::string testName;
    int param;
    int expected;
};

//vector holding all test cases
std::vector<TestCase> m_testCases;

//problem intro
std::string m_problemIntro;

//run all tests
void runTests();

};
} //namespace
