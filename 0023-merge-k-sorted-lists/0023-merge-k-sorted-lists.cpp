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
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* merged=new ListNode(0);
        ListNode* toReturn=merged;
        while(l1 && l2){
            if(l1->val<=l2->val){
                merged->next=l1;
                l1=l1->next;
            }
            else{
                merged->next=l2;
                l2=l2->next;
            }
            merged=merged->next;
        }
        if(l1) merged->next=l1;
        else merged->next=l2;
        return toReturn->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0) return nullptr;
        if(n==1) return lists[0];
        ListNode* merged=new ListNode(0);
        ListNode* newll=lists[0];
        for(int i=0;i<n-1;i++){
            newll=merge(newll,lists[i+1]);
        }
        return newll;
    }
};