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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* temp=dummy;
        ListNode* prev=head;
        while(temp->next && temp->next->next){
            prev=temp;
            ListNode* first=temp->next;
            ListNode* second=first->next;
            first->next=second->next;
            second->next=first;
            prev->next=second;
            temp=first;
        }
        return dummy->next;;
    }
};