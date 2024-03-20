// # 17. Problem Statement: Letter Combinations of a Phone Number
//                          Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
                        
//                          A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

class Solution {
public:
    

    vector<string> v;

    void solve(vector<int>& num, string& temp, int i){
        vector<string> arr= {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(temp.size() == num.size() || i == num.size()){
            v.push_back(temp);
            return;
        }
        //cout<<i;
        for(int x=0;x<arr[num[i]-2].size();x++){
            
            temp = temp + arr[num[i]-2][x];
            i++;
            solve(num, temp, i);
            i--;
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        int n = digits.size();

        if(digits.size() == 0)
        return v;

        vector<int> num(0);
        for(int i=0;i<n;i++){
            num.push_back(int(digits[i])-48);
        }
        // cout<<num[1];
        string temp="";
        solve(num, temp, 0);

        return v;
    }
};
                        
