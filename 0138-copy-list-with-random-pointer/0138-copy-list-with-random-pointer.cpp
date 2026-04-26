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
        map<Node*,Node*>mp;
        Node* temp=head;
        while(temp){
            mp[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        Node* copy=mp[temp];
        Node* copyhead=copy;
        while(temp){
            copy->next=mp[temp->next];
            copy->random=mp[temp->random];
            temp=temp->next;
            copy=copy->next;
        }
        return copyhead;
    }
};