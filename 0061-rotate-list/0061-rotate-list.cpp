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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0) return head;
        ListNode* counter=head;
        int cnt=1;
        while(counter->next){
            counter=counter->next;
            cnt++;
        }
        if(k%cnt==0) return head;
        k=k%cnt;
        counter->next=head;
        for(int i=0;i<cnt-k-1;i++){
            head=head->next;
        }
        ListNode* newhead=head->next;
        head->next=nullptr;
        return newhead;
    }
};