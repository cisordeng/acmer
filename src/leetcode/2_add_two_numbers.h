//
// Created by cisor on 2/1/21.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    explicit ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto *node = l1;
        while (node) {
            node->val = node->val + (l2 ? l2->val : 0);
            // 进位
            int carry = node->val / 10;
            if (carry == 0 && (!l2 || !l2->next)) {
                break;
            }
            if (!node->next) {
                node->next = new ListNode();
            }
            node->next->val += carry;
            node->val = node->val % 10;

            node = node->next;
            l2 = l2 ? l2->next : l2;
        };
        return l1;
    }
};
