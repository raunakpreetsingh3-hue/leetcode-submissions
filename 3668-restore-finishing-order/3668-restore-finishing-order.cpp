class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        unordered_set<int>st(friends.begin(),friends.end());
        vector<int>v;
        for(int i=0;i<n;i++){
            if(st.count(order[i])){
                v.push_back(order[i]);
            }
        }
        return v;
    }
};