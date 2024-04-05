// # 1544. Problem Statement: Make the String Great
//                            Given a string s of lower and upper case English letters.
                          
//                            A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:
                          
//                            0 <= i <= s.length - 2
//                            s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
//                            To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.
                          
//                            Return the string after making it good. The answer is guaranteed to be unique under the given constraints.
                          
//                            Notice that an empty string is also good.

class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        vector<char> v;

        for(int i=0;i<n;i++){
            v.push_back(s[i]);
        }

        for(int i=0;i<n;i++){
            if(i-1 >= 0 && abs(v[i-1] - v[i]) == 32){
                v.erase(v.begin()+i);
                v.erase(v.begin()+i-1);
                i=-1; 
            }
            n = v.size();   
        }
        
        string st = "";
        for(int i=0;i<v.size();i++){
            st=st+v[i];
        }

        return st;
    }
};
