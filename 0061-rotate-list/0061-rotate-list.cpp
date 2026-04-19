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
        int cnt=0;
        while(counter){
            cnt++;
            counter=counter->next;
        }
        if(k%cnt==0) return head;
        k=k%cnt;
        for(int i=0;i<k;i++){
            ListNode* temp=head;
            while(temp->next->next){
                temp=temp->next;
            }
            ListNode* prev=temp;
            temp=temp->next;
            prev->next=nullptr;
            temp->next=head;
            head=temp;
        }
        return head;
    }
};