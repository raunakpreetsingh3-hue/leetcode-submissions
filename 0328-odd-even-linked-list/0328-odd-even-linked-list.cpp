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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        int cnt=1;
        ListNode* dummy1=new ListNode(-1);
        ListNode* dummy2=new ListNode(-1);
        ListNode* oddtail=dummy1;
        ListNode* eventail=dummy2;
        ListNode* temp=head;
        while(temp){
            if(cnt%2==1){
                oddtail->next=new ListNode(temp->val);
                oddtail=oddtail->next;
            }
            else{
                eventail->next=new ListNode(temp->val);
                eventail=eventail->next;
            }
            cnt++;
            temp=temp->next;
        }
        oddtail->next=dummy2->next;
        return dummy1->next;
    }
};