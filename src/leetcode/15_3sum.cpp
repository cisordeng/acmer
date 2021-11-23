//
// Created by cisor on 11/23/21.
//

#include "15_3sum.h"

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = Solution::threeSum(nums);
    for (auto & row : result) {
        cout<<"[ ";
        for (auto & num : row) {
            cout<<num<<" ";
        }
        cout<<"] ";
    }
    return 0;
}