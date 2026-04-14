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
    bool isPalindrome(ListNode* head) {
        vector<int>el;
        ListNode* temp=head;
        while(temp){
            el.push_back(temp->val);
            temp=temp->next;
        }
        int j=el.size()-1;
        int i=0;
        while(i<=j){
            if(el[i]!=el[j]) return false;
            j--;
            i++;
        }
        return true;
    }
};