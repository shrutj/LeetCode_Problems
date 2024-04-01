// # 58. Problem Statement: Length of Last Word
//                          Given a string s consisting of words and spaces, return the length of the last word in the string.
                        
//                          A word is a maximal substring consisting of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count=0;

        for(int i=n-1;i>=0;i--){
            if(s[n-1] == ' ')
            n=n-1;

            else if(s[i] == ' ')
            break;
            
            else
            count++;
        }
        return count;
    }
};
