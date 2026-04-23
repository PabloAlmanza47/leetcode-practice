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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //quick exit
        if (list1 == nullptr) return list2;
        else if (list2 == nullptr) return list1;
        else if (list1 == nullptr && list2 == nullptr) return nullptr;

        ListNode* return_list = new ListNode(0);
        ListNode* return_helper = return_list;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                return_helper->next = list1;
                list1 = list1->next;
            } else {
                return_helper->next = list2;
                list2 = list2->next;
            }
            return_helper = return_helper->next;
        }


        if (list1 == nullptr) {
            return_helper->next = list2;
        } else {
            return_helper->next = list1;
        }
        return return_list->next;
    }
};
