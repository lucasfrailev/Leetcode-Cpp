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
        ListNode* next_n = head;
        int j = 0;
        while (next_n != nullptr){
            j++;
            next_n = next_n->next;
        }
        if (n==j) return head->next;
        next_n = prev_n;
        for (int i = 0;i<(j-n);i++){
            next_n = next_n->next;
            if (i<(j-n-1)){
                prev_n = prev_n->next;
            }
        }
        prev_n->next = next_n->next;
        return head;
    }
};