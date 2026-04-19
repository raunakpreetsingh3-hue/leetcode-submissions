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
    void reverseLL(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp){
            ListNode* tempnext=temp->next;
            temp->next=prev;
            prev=temp;
            temp=tempnext;
        }
    }

    ListNode* findkth(ListNode* head,int k){
        ListNode* newhead=head;
        ListNode* temp=head;
        for(int i=1;i<k;i++){
            if(temp==nullptr) return nullptr;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp){
            ListNode* kthnode= findkth(temp,k);
            ListNode* newhead=kthnode;
            if(kthnode==nullptr){
                if(prev) prev->next=temp;
                break;
            }
            ListNode* nextnode=kthnode->next;
            kthnode->next=nullptr;
            reverseLL(temp);
            if(temp==head){
                head=kthnode;
            }
            else{
                prev->next=kthnode;
            }
            prev=temp;
            temp=nextnode;
        }
        return head;
    }
};