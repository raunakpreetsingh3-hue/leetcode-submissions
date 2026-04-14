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
    bool isPalindrome(ListNode* head){
        if(head==nullptr || head->next==nullptr) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=slow->next;
        ListNode* prev=nullptr;
        while(newhead){
            ListNode* nextel=newhead->next;
            newhead->next=prev;
            prev=newhead;
            newhead=nextel;
        }
        ListNode* secondhead=prev;
        ListNode* temp=head;
        bool ispalin=true;
        while(prev){
            if(prev->val!=temp->val){
                ispalin=false;
                break;
            }
            prev=prev->next;
            temp=temp->next;
        }
        prev=nullptr;
        while(secondhead){
            ListNode* nextel=secondhead->next;
            secondhead->next=prev;
            prev=secondhead;
            secondhead=nextel;
        }
        return ispalin;
    }
};