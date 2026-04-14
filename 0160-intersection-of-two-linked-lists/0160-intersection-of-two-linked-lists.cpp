/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int cnt1=0,cnt2=0;
        while(temp1){
            cnt1++;
            temp1=temp1->next;
        }
        while(temp2){
            cnt2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        int diff=cnt2-cnt1;
        if(diff<0) diff=diff*(-1);
        for(int i=0;i<diff;i++){
            if(cnt2>cnt1) temp2=temp2->next;
            else temp1=temp1->next;
        }
        while(temp1){
            if(temp1==temp2) return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return nullptr;
    }
};