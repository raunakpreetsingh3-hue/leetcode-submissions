class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<friends.size();j++){
                if(order[i]==friends[j]) v.push_back(order[i]);
            }
        }
        return v;
    }
};