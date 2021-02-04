//
// Created by cisor on 2/4/21.
//

#ifndef ACMER_REVERSE_INTEGER_H
#define ACMER_REVERSE_INTEGER_H

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    static int reverse(int x) {
        int min = (int)(pow(-2, 31));
        int max = - (min + 1);

        string sign = x >= 0 ? "+" : "-";
        x = abs(x);
        string xStr = to_string(x);
        std::reverse(xStr.begin(), xStr.end());
        long xl = stol(sign + xStr);
        if (xl < min || xl > max) {
            return 0;
        }
        return (int)xl;
    }
};


#endif //ACMER_REVERSE_INTEGER_H
