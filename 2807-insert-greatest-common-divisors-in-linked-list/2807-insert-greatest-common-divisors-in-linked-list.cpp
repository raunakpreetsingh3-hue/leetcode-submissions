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
    int gcd(int a,int b){
        int x=max(a,b);
        int ans=1;
        for(int i=1;i<=x;i++){
            if(a%i==0 && b%i==0){
                ans=i;
            }
        }
        return ans;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* temp=head->next;
        ListNode* prev=head;
        while(temp){
            int getans=gcd(prev->val,temp->val);
            ListNode* put=new ListNode(getans);
            prev->next=put;
            put->next=temp;
            temp=temp->next;
            prev=prev->next->next;
        }
        return head;
    }
};