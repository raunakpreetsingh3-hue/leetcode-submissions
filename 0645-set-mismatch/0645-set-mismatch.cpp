class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int repeated=-1;
        int missing=-1;
        for(int i=1;i<=n;i++){
            auto it=mp.find(i);
            if(it!=mp.end() && it->second>1) repeated=i;
            if(it==mp.end()) missing=i;
            if(repeated!=-1 && missing!=-1) break;
        }
        return {repeated,missing};
    }
};