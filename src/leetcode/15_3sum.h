//
// Created by cisor on 11/23/21.
//

#ifndef ACMER_SUM_H
#define ACMER_SUM_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    static vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if (nums.size() < 3) {
            return result;
        }
        sort(nums.begin(), nums.end());
        if (nums[0] > 0 || nums[nums.size() - 1] < 0) {
            return result;
        }
        for (int index = 0; index < nums.size(); ++index) {
            if (nums[index] > 0) {
                return result;
            }
            if (index > 0 && nums[index] == nums[index - 1]) {
                continue;
            }

            auto left = index + 1;
            auto right = nums.size() - 1;
            while (left < right) {
                auto count = nums[index] + nums[left] + nums[right];
                if (count > 0) {
                    right--;
                } else if (count < 0) {
                    left++;
                } else {
                    result.push_back({nums[index], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};


#endif //ACMER_SUM_H
