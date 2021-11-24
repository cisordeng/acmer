//
// Created by cisor on 11/24/21.
//

#include "16_3sum_closest.h"

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int result = Solution::threeSumClosest(nums, target);
    cout<<result<<endl;
    return 0;
}