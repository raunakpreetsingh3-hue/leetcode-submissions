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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        vector<int>a;
        ListNode* temp=head;
        while(temp){
            a.emplace_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        ListNode* newhead= new ListNode(a[0]);
        ListNode* temp2=newhead;
        for(int i=1;i<a.size();i++){
            ListNode* nextnode=new ListNode(a[i]);
            temp2->next=nextnode;
            temp2=temp2->next;
        }
        return newhead;
    }
};