/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* reverseList(ListNode* head) {
        // quick exit
        if (head == nullptr) return nullptr;

        ListNode* return_list = nullptr;
        ListNode* helper;

        while (head != nullptr) {
            helper = head->next;
            head->next = return_list;
            return_list = head;
            head = helper;
        }
        return return_list;
    }
};
