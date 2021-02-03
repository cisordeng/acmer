//
// Created by cisor on 2/3/21.
//

#ifndef ACMER_LONGEST_PALINDROMIC_SUBSTRING_H
#define ACMER_LONGEST_PALINDROMIC_SUBSTRING_H

#include <iostream>

using namespace std;

class Solution {
public:
    static string longestPalindrome(const string& s) {
        string longestString = s.substr(0, 1);
        string subString;
        bool odd;
        bool even;
        for (int i = 1; i < s.size(); ++i) { // 中心位置
            odd = true;
            even = true;
            for (int j = 1; j >= 1 && j < s.size(); ++j) {  // 距离
                if (odd) { // 奇数子串是回文
                    if (i - j >= 0 && i + j <= s.size() && s[i - j] == s[i + j]) {
                        if (longestString.size() < 2 * j + 1) {
                            longestString = s.substr(i - j, 2 * j + 1);
                        }
                    } else {
                        odd = false;
                    }
                }

                if (even) { // 偶数子串是回文
                    if (i - j >= 0 && i + j - 1 <= s.size() && s[i - j] == s[i + j - 1]) {
                        if (longestString.size() < 2 * j) {
                            longestString = s.substr(i - j, 2 * j);
                        }
                    } else {
                        even = false;
                    }
                }

                if (!odd && !even) {
                    break;
                }
            }
        }
        return longestString;
    }
};


#endif //ACMER_LONGEST_PALINDROMIC_SUBSTRING_H
