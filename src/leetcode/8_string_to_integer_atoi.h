//
// Created by cisor on 2/5/21.
//

#ifndef ACMER_STRING_TO_INTEGER_ATOI_H
#define ACMER_STRING_TO_INTEGER_ATOI_H

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    static int myAtoi(string s) {
        int min = (int)(pow(-2, 31));
        int max = - (min + 1);
        // 去除前导空格
        s.erase(0,s.find_first_not_of(' '));

        if (s.empty()) {
            return 0;
        }

        string sign = "+";
        string numString = "0";
        bool zero = true;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] < '0' || s[i] > '9') {
                if (i == 0 && (s[i] == '+' || s[i] == '-')) {
                    sign = s[i];
                } else {
                    break;
                }
            } else {
                if (!zero || s[i] != '0') {
                    numString += s[i];
                    zero = false;
                }
            }
        }

        if (numString.size() > to_string(min).size()) {
            if (sign == "+") {
                return max;
            } else {
                return min;
            }
        }

        long num;
        num = stol(sign + numString);
        if (num < min)  {
            return (int)min;
        } else if (num > max) {
            return (int)max;
        } else {
            return (int)num;
        }

    }
};


#endif //ACMER_STRING_TO_INTEGER_ATOI_H
