//
// Created by cisor on 2/3/21.
//

#ifndef ACMER_ZIGZAG_CONVERSION_H
#define ACMER_ZIGZAG_CONVERSION_H

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    static string convert(const string& s, int numRows) {
        string convertedStr;
        string rows[numRows];
        for (int i = 0; i < numRows; ++i) {
            rows[i] = "";
        }

        int y = 0;  // 字符y坐标

        bool top = false;
        for (char i : s) {
            rows[y] += i;

            if (!top) { // 向下排列
                if (y + 1 < numRows) {
                    y++;
                } else {
                    top = true;
                    if (y - 1 >= 0) {
                        y--;
                    }
                }
            } else {
                if (y - 1 >= 0) {
                    y--;
                } else {
                    top = false;
                    if (y + 1 < numRows) {
                        y++;
                    }
                }
            }
        }

        for (auto & row : rows) {
            convertedStr += row;
        }
        return convertedStr;
    }
};


#endif //ACMER_ZIGZAG_CONVERSION_H
