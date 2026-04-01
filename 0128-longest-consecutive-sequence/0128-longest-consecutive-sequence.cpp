class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int maxi=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    x++;
                    cnt++;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};