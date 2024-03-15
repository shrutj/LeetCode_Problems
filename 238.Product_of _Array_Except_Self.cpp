// # 238. Problem Statement: Product of Array Except Self.
//                           Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
                        
//                           The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
                        
//                           You must write an algorithm that runs in O(n) time and without using the division operation.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> v;

        int n = nums.size();
        int z = 1;
        int flag = 0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                flag++;
            }
            else{
                z = z * nums[i];
            }
        }

        int pro = z;
        

        for(int i=0;i<n;i++){
            if(flag == 0){
                pro = pro / nums[i];
                v.push_back(pro);
                pro = z;
            }
            else if(flag == 1){
                if(nums[i] == 0){
                    v.push_back(z);
                }
                else{
                    v.push_back(0);
                }
            }
            else if(flag > 1){
                v.push_back(0);
            }
            
        }
        return v;
    }
};
