// # 442. Problem Statement: Find All Duplicates in an Array
//                           Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
                          
//                           You must write an algorithm that runs in O(n) time and uses only constant extra space.

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;

        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i]) -1 ]< 0)
            v.push_back(abs(nums[i]));

            else
            nums[abs(nums[i])-1]=nums[abs(nums[i])-1]*-1;
        }

        return v;

    }
};
