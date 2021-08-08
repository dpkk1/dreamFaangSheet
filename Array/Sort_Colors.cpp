/*

	Problem Link: https://leetcode.com/problems/sort-colors/

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high = nums.size()-1;
        int m=0;
        while(m<=high){
            switch(nums[m]){
                case 0:
                    swap(nums[low++],nums[m++]);
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    swap(nums[m],nums[high--]);
                    break;
            }
        }
    }
};
