/*

	Problem Link: https://leetcode.com/problems/maximum-subarray/

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maximum_Subarray_sum=INT_MIN;
        for(auto i:nums){
            sum += i;
            maximum_Subarray_sum = max(maximum_Subarray_sum,sum);
            if(sum < 0)
                sum=0;
        }
        return maximum_Subarray_sum;
    }
};
