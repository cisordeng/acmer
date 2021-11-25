//
// Created by cisor on 11/25/21.
//

#include "17_letter_combinations_of_a_phone_number.h"

int main() {
    string digits = "23";
    auto result = Solution::letterCombinations(digits);
    cout<<"[ ";
    for (auto & row : result) {
        cout<<row<<" ";
    }
    cout<<"] "<<endl;
    return 0;
}