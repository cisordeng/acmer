//
// Created by cisor on 2/1/21.
//
#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    static int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        string subString;
        for (int i = 0; i < s.size(); ++i) {
            if (s.size() - i <= maxLength) {
                return maxLength;
            }
            subString = s[i];
            for (int j = i + 1; j < s.size(); ++j) {
                if (subString.find(s[j]) != string::npos) {
                    break;
                }
                subString += s[j];
            }
            if (maxLength < subString.size()) {
                maxLength = subString.size();
            }
        }
        return maxLength;
    }
};
