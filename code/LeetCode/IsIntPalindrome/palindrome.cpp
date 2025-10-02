#include "palindrome.h"

namespace Palindrome
{

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
}//namespace
