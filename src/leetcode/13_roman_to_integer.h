//
// Created by cisor on 11/21/21.
//

#ifndef ACMER_ROMAN_TO_INTEGER_H
#define ACMER_ROMAN_TO_INTEGER_H

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    static int count_substring(const string& s, const string& target) {
        int count = 0;
        int pos = 0;
        while ((pos = s.find(target, pos)) != string::npos) {
            count ++;
            pos += target.length();
        }
        return count;
    }
    static int romanToInt(const string& s) {
        map<string, int> code2num;
        code2num["CM"] = count_substring(s, "CM");
        code2num["CD"] = count_substring(s, "CD");
        code2num["XC"] = count_substring(s, "XC");
        code2num["XL"] = count_substring(s, "XL");
        code2num["IX"] = count_substring(s, "IX");
        code2num["IV"] = count_substring(s, "IV");
        code2num["M"] = count_substring(s, "M") - code2num["CM"];
        code2num["D"] = count_substring(s, "D") - code2num["CD"];
        code2num["C"] = count_substring(s, "C") - code2num["CM"] - code2num["CD"] - code2num["XC"];
        code2num["L"] = count_substring(s, "L") - code2num["XL"];
        code2num["X"] = count_substring(s, "X") - code2num["XC"] - code2num["XL"] - code2num["IX"];
        code2num["V"] = count_substring(s, "V") - code2num["IV"];
        code2num["I"] = count_substring(s, "I") - code2num["IX"] - code2num["IV"];
        return code2num["I"] + code2num["IV"] * 4 + code2num["V"] * 5 + code2num["IX"] * 9 + code2num["X"] * 10 + code2num["XL"] * 40 + code2num["L"] * 50 + code2num["XC"] * 90 + code2num["C"] * 100 + code2num["CD"] * 400 + code2num["D"] * 500 + code2num["CM"] * 900 + code2num["M"] * 1000;
    }
};


#endif //ACMER_ROMAN_TO_INTEGER_H
