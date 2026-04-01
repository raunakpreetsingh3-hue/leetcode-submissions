class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size();
        int cnt=0,presum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            presum+=a[i];
            cnt+=mp[presum-k];
            mp[presum]++;
        }
        return cnt;
    }
};