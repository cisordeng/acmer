//
// Created by cisor on 11/22/21.
//

#ifndef ACMER_LONGEST_COMMON_PREFIX_H
#define ACMER_LONGEST_COMMON_PREFIX_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static string longestCommonPrefix(vector<string>& strs) {
        string str = strs[0];
        int len = str.length();
        for (int index = 0; index < strs.size(); index++) {
            if (strs[index].find(str.substr(0, len)) != 0) {
                len--;
                index = -1;
                continue;
            }
            if (index == (strs.size() - 1)) {
                return str.substr(0, len);
            }
        }
        return "";
    }
};


#endif //ACMER_LONGEST_COMMON_PREFIX_H
