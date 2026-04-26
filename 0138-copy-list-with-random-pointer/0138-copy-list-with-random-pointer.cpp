/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return head;
        Node* temp=head;
        while(temp){
            Node* newnode=new Node(temp->val);
            newnode->next=temp->next;
            temp->next=newnode;
            temp=temp->next->next;
        }
        temp=head;
        while(temp){
            temp->next->random=temp->random ? temp->random->next : nullptr;
            temp=temp->next->next;
        }
        temp=head;
        Node* copied=temp->next;
        Node* copyhead=copied;
        while(temp){
            temp->next=temp->next->next;
            copied->next=copied->next ? copied->next->next: nullptr;
            copied=copied->next;
            temp=temp->next;
        }
        return copyhead;
    }
};