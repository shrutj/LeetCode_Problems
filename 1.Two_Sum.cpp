// # 1. Problem Statement: Two Sum
//                         Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
                        
//                         You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        while(i < nums.size()-1){
            //int j=i+1;
            for(int j=i+1;j<nums.size();j++)
            if(nums[i]+nums[j] == target)
            return {i, j};
            
            i++;
        }
        return {};
    }
};
