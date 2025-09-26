#include "bst.h"
#include <vector>

namespace BinarySearch
{
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

}//namespace
