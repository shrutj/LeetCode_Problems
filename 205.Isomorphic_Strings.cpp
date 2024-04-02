// # 205. Problem Statement: Isomorphic Strings
//                           Given two strings s and t, determine if they are isomorphic.

//                           Two strings s and t are isomorphic if the characters in s can be replaced to get t.
                          
//                           All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;
        unordered_map<char, char> map_chars;
        unordered_set<char> set_vals;
        for (int i = 0; i < s.length(); ++i) {
            if (map_chars.find(s[i]) != map_chars.end()) {
                if (map_chars[s[i]] != t[i])
                    return false;
            } else {
                if (set_vals.find(t[i]) != set_vals.end())
                    return false;
                map_chars[s[i]] = t[i];
                set_vals.insert(t[i]);
            }
        }
        return true;
    }
};
