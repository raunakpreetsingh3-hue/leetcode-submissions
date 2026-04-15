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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        ListNode* temp=head;
        while(temp){
            st.insert(temp);
            if(st.count(temp->next)) return true;
            temp=temp->next;
        }
        return false;
    }
};