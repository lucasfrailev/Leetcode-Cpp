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
    ListNode* middleNode(ListNode* head) {
        ListNode* i = head;
        ListNode* j = head;
        int k = 0;
        while (j != nullptr && j->next != nullptr){
            j = j->next->next;
            i = i->next;
        }
        return i;
    }
};