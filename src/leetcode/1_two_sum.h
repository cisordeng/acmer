//
// Created by cisor on 1/30/21.
//

#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    template<class T>
    int find_index(vector<T> array, T target, int pos = 0) { // 指定位置查找数组元素，返回元素下标
        auto it = find(array.begin() + pos, array.end(), target);
        return it != array.end() ? it - array.begin() : -1;
    };
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int index = 0; index < nums.size(); ++index) {
            int one_num = nums[index];
            int two_num = target - one_num;
            int other_index = find_index(nums, two_num, index + 1);
            if (other_index > 0) {
                return {index, other_index};
            }
        }
        return {-1, -1};
    };
};

