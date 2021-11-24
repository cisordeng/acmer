//
// Created by cisor on 11/24/21.
//

#ifndef ACMER_SUM_CLOSEST_H
#define ACMER_SUM_CLOSEST_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    static int threeSumClosest(vector<int>& nums, int target) {
        auto ans = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (int index = 0; index < nums.size(); ++index) {
            auto left = index + 1;
            auto right = nums.size() - 1;
            while (left < right) {
                auto count = nums[index] + nums[left] + nums[right];
                if (abs(count - target) < abs(ans - target)) {
                    ans = count;
                }
                if (count > target) {
                    right--;
                } else if (count < target) {
                    left++;
                } else {
                    return ans;
                }
            }
        }
        return ans;
    }
};


#endif //ACMER_SUM_CLOSEST_H
