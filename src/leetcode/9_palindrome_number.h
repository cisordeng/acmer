//
// Created by cisor on 2/7/21.
//

#ifndef ACMER_PALINDROME_NUMBER_H
#define ACMER_PALINDROME_NUMBER_H

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool isPalindrome(int x) {
        auto sx = to_string(x);
        auto rsx = sx;
        reverse(rsx.begin(), rsx.end());
        return rsx == sx;
    }
};


#endif //ACMER_PALINDROME_NUMBER_H
