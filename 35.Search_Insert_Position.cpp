// # 35. Problem Statement: Search Insert Position
//                          Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
                        
//                          You must write an algorithm with O(log n) runtime complexity.


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty() == 1)
        return 0;

        int n=nums.size();

        int start=0, end=n-1, mid;
        while(start <= end ){
            mid=start+(end-start)/2;
            if(nums[mid] == target)
            return mid;

            if(nums[mid] < target)
            start=mid+1;

            else
            end=mid-1;
        }

        return start;
    }
};
