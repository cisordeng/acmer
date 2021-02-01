//
// Created by cisor on 2/1/21.
//

#include "2_add_two_numbers.h"
#include <vector>
#include <iostream>

using namespace std;


int main() {
    vector<int> l1array = {9, 9 ,9 ,9 ,9, 9, 9};
    vector<int> l2array = {9, 9, 9, 9};
    auto *node = new ListNode(l1array[0]);
    auto *l1 = node;
    for (int i = 1; i < l1array.size(); ++i) {
        node->next = new ListNode(l1array[i]);
        node = node->next;
    }

    node = new ListNode(l2array[0]);
    auto *l2 = node;
    for (int i = 1; i < l2array.size(); ++i) {
        node->next = new ListNode(l2array[i]);
        node = node->next;
    }
    ListNode *result = Solution::addTwoNumbers(l1, l2);
    while (result) {
        cout<<result->val;
        result = result->next;
    }
    cout<<endl;
    return 0;
}