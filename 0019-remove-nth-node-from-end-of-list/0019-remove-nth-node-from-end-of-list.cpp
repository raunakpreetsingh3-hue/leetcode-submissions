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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return head;
        ListNode* temp=head;
        int cnt=0;
        while(temp){
           cnt++;
           temp=temp->next;
        }
        if(n>cnt) return head;
        if(n==cnt){
            ListNode* del=head;
            head=head->next;
            delete del;
            return head;
        }
        int el=cnt-n;
        temp=head;
        for(int i=0;i<el-1;i++){
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};