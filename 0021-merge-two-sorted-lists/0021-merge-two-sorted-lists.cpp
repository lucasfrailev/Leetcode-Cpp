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
        ListNode* index1 = list1;
        ListNode* index2 = list2;
        ListNode* merged_head;
        if (list1!=nullptr){
             if (list2!=nullptr){
                if (index1->val<index2->val){
                    merged_head = index1;
                    index1=index1->next;
                } else {
                    merged_head = index2;
                    index2=index2->next;
                }
             } else {
                 return list1;
             }
        } else {
            return list2;
        }
        
        ListNode* merged = merged_head;
        while (index1 != nullptr && index2 != nullptr){
            if (index1->val<index2->val){
                merged->next = index1;
                index1 = index1->next;
                merged = merged->next;
            } else {
                merged->next = index2;
                index2=index2->next;
                merged = merged->next;
            }
        }
        if (index1==nullptr && index2==nullptr){
            return merged_head;
        } else if (index1==nullptr){
            merged->next = index2;
            return merged_head;
        } else{
            merged->next = index1;
            return merged_head;
        }
        return nullptr;
    }
};