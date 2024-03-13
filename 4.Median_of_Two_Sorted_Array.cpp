// # 4.Problem Statement: Median of Two Sorted Arrays
//                        Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

//                        The overall run time complexity should be O(log (m+n)). 

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int v[m+n];
        int i=0, j=0, k=0;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
            v[k]=nums1[i];
            i++, k++;
            }

            else if(nums1[i] > nums2[j]){
                v[k]=nums2[j];
                j++, k++;
            }
        }

        while(i < m ){
            v[k]=nums1[i];
            i++, k++;
        }

        while(j < n ){
            v[k]=nums2[j];
            j++, k++;
        }

        // for(int k=0;k<m+n;k++)
        // nums1[k]=v[k];
        
        int mid;
        double med;
        if((m+n) % 2 == 0){
            mid=(m+n-1)/2;
            med=v[mid]+v[mid+1];
            med=med/2;
        }
        else{
            mid=(m+n-1)/2;
            med=v[mid];
            med=med+0.0;
        }
        return med;
        
    }
};
