using namespace std;
#include <bits/stdc++.h>
int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int curr = 0;
        for(int i = 0 ; i < nums.size(); i++)
        {curr += nums[i];
          if (curr>max)
    {
        max = curr;
    }
    if (curr<0)
    {
        curr = 0;
    }
        }
    return max;
    }
int main() { 
	vector<int> nums = { 2, 3, 4, 5, 7 }; 
	int max_sum = maxSubArray(nums); 
	cout << "Maximum contiguous sum is " << max_sum; 
	return 0; 
} 
