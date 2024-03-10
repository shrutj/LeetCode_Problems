// # 349. Intersection of Two Arrays
//        Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> v;
        
        int i=0, j=0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while(i <n1 && j< n2){
            if(nums1[i] == nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j])
            i++;

            else 
            j++;
        }

        set<int> s;

        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }

        vector<int> l;

        for(auto i : s){
            l.push_back(i);
        }

        return l;
    }
};
