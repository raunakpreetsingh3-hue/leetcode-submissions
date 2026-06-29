class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sets;
        vector<vector<int>>ans;
        int t=1<<nums.size();
        for(int i=0;i<t;i++){
            for(int j=0;j<nums.size();j++){
                if(i & (1<<j)) sets.push_back(nums[j]);
            }
            ans.push_back(sets);
            sets.clear();
        }
        return ans;
    }
};