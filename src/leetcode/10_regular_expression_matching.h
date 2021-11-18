//
// Created by cisor on 11/18/21.
//

#ifndef ACMER_REGULAR_EXPRESSION_MATCHING_H
#define ACMER_REGULAR_EXPRESSION_MATCHING_H

#include <iostream>
#include <regex>

using namespace std;

class Solution {
public:
    static bool isMatch(const string& s, const string& p) {
        regex reg(p);
        return regex_match(s, reg);
    }
};


#endif //ACMER_REGULAR_EXPRESSION_MATCHING_H
