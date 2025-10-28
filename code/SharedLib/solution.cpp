#include "solution.h"

namespace PracticeProblems {

std::string k_lineSeparator = "----------------\n";
int k_testCaseNameDisplayLength = 20;
char k_dotChar = '.';
char k_blankSpace = ' ';

void printLine(std::string lineStr) {
    std::cout << lineStr << std::endl;
}

std::string elideString(std::string str, int length) {
    return str;
}

void startTestHarness(std::string problemIntro, int caseCount) {
    printLine(k_lineSeparator);
    printLine(problemIntro);
    std::cout << "Found " << caseCount << " test cases.";
    printLine(k_lineSeparator);
}

void printTestCaseResult(std::vector<std::string> caseResult, bool passed) {
    std::string out;
    std::string caseName = caseResult[0];
    caseName = elideString(caseName, k_testCaseNameDisplayLength);
    out += " - " + caseName;
    if (passed) {
        out += " - FAILED";
        printLine(out);
        printLine(k_lineSeparator);
        std::cout << "Expected: " << caseResult[1] << std::endl;
        std::cout << "Received: " << caseResult[2] << std::endl;
        printLine(k_lineSeparator);
  } else {
        out += " - PASSED";
        printLine(out);
    }
}

void endTestHarness(int passed, int totalCases) {
    printLine(k_lineSeparator);
    std::cout << "All tests ran."
    std::cout << passed << " out of " << totalCases << " passed."
    printLine(k_lineSeparator);
}

// class methods
//

Solution::Solution() : 
m_testCases({
    {"pass case", 1, 1},
    {"fail case", 1, 0},
}),
m_problemIntro(
    R"(
Problem Class.

blah blah blah
    )"),
{}

int Solution::problem(int x) {
    return x;
}

void Solution::runTests() {
    int totalCases = m_testCases.size();
    int passed = 0;
    
    startTestHarness(m_problemIntro, totalCases);
    // run test for all test cases
    endTestHarness(passed, totalCases);
}

} //namespace
