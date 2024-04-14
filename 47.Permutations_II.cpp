// # 47. Problem Statement: Permutations II
//                          Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

class Solution {
public:
    vector<vector<int>> v;

    void solve(vector<int>& temp, vector<int>& nums, int n){
        if(temp.size() == n){
            v.push_back(temp);
            return;
        }

        int k;
        vector<int> d;
        bool flag = 0;

        for(int i=0;i<nums.size();i++){
            flag = 0;
            for(int j=0;j<d.size();j++){
                if(nums[i] == d[j])
                flag = 1;
            }
            if(flag == 1)
            continue;
            
            k = nums[i];
            temp.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            solve(temp, nums, n);
            temp.pop_back();
            nums.insert(nums.begin()+i, k);
            d.push_back(nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();

        solve(temp, nums, n);

        return v;
    }
};
