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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev_n = head;
        ListNode* mid_n = head;
        ListNode* next_n = head;
        while (n!= 0 && next_n != nullptr){
            n--;
            next_n = next_n->next;
        }
        if (next_n == nullptr) return head->next;
        while (next_n != nullptr){
            prev_n = mid_n;
            mid_n = mid_n->next;
            next_n = next_n->next;
        }
        prev_n->next = mid_n->next;
        return head;
    }
};