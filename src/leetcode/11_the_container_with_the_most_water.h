//
// Created by cisor on 11/19/21.
//

#ifndef ACMER_THE_CONTAINER_WITH_THE_MOST_WATER_H
#define ACMER_THE_CONTAINER_WITH_THE_MOST_WATER_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static int maxArea(vector<int>& height) {
        int i = 0;
        int j = int(height.size() - 1);
        int area = 0;
        while (i < j) {
            area = height[i] < height[j] ? max(area, (j - i) * height[i++]) : max(area, (j - i) * height[j--]);
        }
        return area;
    }
};


#endif //ACMER_THE_CONTAINER_WITH_THE_MOST_WATER_H
