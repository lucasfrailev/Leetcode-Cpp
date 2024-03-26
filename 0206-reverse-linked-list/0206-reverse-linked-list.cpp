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
        ListNode* i = head;
        if (i == nullptr) return i;
        ListNode* j = new ListNode(i->val);
        while (i->next != nullptr){
            i = i->next;
            j = new ListNode(i->val,j);

        }
        return j;
    }
};