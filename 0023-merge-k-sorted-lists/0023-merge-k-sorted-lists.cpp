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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,
        vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        int n=lists.size();
        for(int i=0;i<n;i++){
            if(lists[i]) pq.push({lists[i]->val,lists[i]});
        }
        ListNode* dummyhead=new ListNode(-1);
        ListNode* temp=dummyhead;
        while(!pq.empty()){
            auto el=pq.top().second;
            pq.pop();
            temp->next=el;
            if(el->next){
                pq.push({el->next->val,el->next});
            }
            temp=temp->next;
        }
        return dummyhead->next;
    }
};