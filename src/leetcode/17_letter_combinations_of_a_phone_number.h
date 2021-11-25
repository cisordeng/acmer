//
// Created by cisor on 11/25/21.
//

#ifndef ACMER_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H
#define ACMER_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    static vector<string> letterCombinations(string digits) {
        map<char, string> digit2chars = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
        };
        vector<string> ans;
        auto indexes = vector<int>(digits.size());
        if (indexes.empty()) {
            return ans;
        }
        while (indexes[0] < digit2chars[digits[0]].size()) {
            string s;
            for (int i = 0; i < indexes.size(); ++i) {
                s += digit2chars[digits[i]][indexes[i]];
            }
            ans.push_back(s);

            // add
            indexes[indexes.size() - 1]++;
            for (int i = (int)indexes.size() - 1; i > 0; --i) {
                indexes[i - 1] += indexes[i] / digit2chars[digits[i]].size();
                indexes[i] = indexes[i] % digit2chars[digits[i]].size();
            }
        }
        return ans;
    }
};


#endif //ACMER_LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H
