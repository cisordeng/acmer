//
// Created by cisor on 11/20/21.
//

#ifndef ACMER_INTEGER_TO_ROMAN_H
#define ACMER_INTEGER_TO_ROMAN_H

#include <iostream>

using namespace std;

class Solution {
public:
    static string intToRoman(int num) {
        string romanNum;
        if (num / 1000) {
            romanNum += string(num / 1000, 'M');
            num = num % 1000;
        }
        if (num / 900) {
            romanNum += "CM";
            num = num % 900;
        }
        if (num / 500) {
            romanNum += string(num / 500, 'D');;
            num = num % 500;
        }
        if (num / 400) {
            romanNum += "CD";
            num = num % 400;
        }
        if (num / 100) {
            romanNum += string(num / 100, 'C');;
            num = num % 100;
        }
        if (num / 90) {
            romanNum += "XC";
            num = num % 90;
        }
        if (num / 50) {
            romanNum += string(num / 50, 'L');;
            num = num % 50;
        }
        if (num / 40) {
            romanNum += "XL";
            num = num % 40;
        }
        if (num / 10) {
            romanNum += string(num / 10, 'X');;
            num = num % 10;
        }
        if (num / 9) {
            romanNum += "IX";
            num = num % 9;
        }
        if (num / 5) {
            romanNum += string(num / 5, 'V');;
            num = num % 5;
        }
        if (num / 4) {
            romanNum += "IV";
            num = num % 4;
        }
        romanNum += string(num, 'I');
        return romanNum;
    }
};


#endif //ACMER_INTEGER_TO_ROMAN_H
