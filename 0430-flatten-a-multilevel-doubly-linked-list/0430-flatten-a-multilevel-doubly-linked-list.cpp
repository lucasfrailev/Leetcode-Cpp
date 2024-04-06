/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node *curr = head, *next = head, *child = head;
        if (head == nullptr) return head;
        while (true){
        if (curr->child == nullptr){
                if (curr->next == nullptr){
                    return head;
                } else {
                    curr=curr->next;
                }
            } else if (curr->next!=nullptr){
                next = curr->next;
                curr->next = curr->child;
                child = curr->child;
                child->prev = curr;
                child = flatten(child);
                while (child->next != nullptr){
                    child = child->next;
                }
                curr->child = nullptr;
                curr = next;
                child->next = next;
                next->prev = child;
            } else {
                curr->next = curr->child;
                child = curr->child;
                child->prev = curr;
                child = flatten(child);
                while (child->next != nullptr){
                    child = child->next;
                }
                curr->child = nullptr;
                curr = child;        }
        }
        return {};
    }
};