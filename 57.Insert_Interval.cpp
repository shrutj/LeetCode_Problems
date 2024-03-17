// # 57. Problem Statement: Insert Interval
//                          You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

//                          Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).
                        
//                          Return intervals after the insertion.
                        
//                          Note that you don't need to modify intervals in-place. You can make a new array and return it. 

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> v;
        int n=intervals.size();

        
        intervals.push_back(newInterval);

        sort(intervals.begin(), intervals.end());

        for(int i=0;i<=n;i++){
            v.push_back({intervals[i][0], intervals[i][1]});
        }

        int f=v[0][0], s=v[0][1];
        vector<vector<int>> v1;
        for(int i=0;i<n;i++){
            if(s >= v[i+1][0]){
                s=max(s,v[i+1][1]);
            }
            else{
                v1.push_back({f, s});
                f=v[i+1][0];
                s=v[i+1][1];
            }
        }
        v1.push_back({f,s});
        return v1;
    }
};
