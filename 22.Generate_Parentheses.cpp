// # 22. Problem Statement: Generate Parentheses
//                          Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

class Solution {
public:
    vector<string> v;

    void solve(int i, int j, int n, string out){
        if(i == j && i == n){
            v.push_back(out);
            return;
        }

        if(i<n){
            solve(i+1, j, n, out+"(");
        }
        if(j<i){
            solve(i, j+1, n, out+")");
        }
    }

    vector<string> generateParenthesis(int n) {
        
        solve(0, 0, n, "");
        return v;
    }
};
