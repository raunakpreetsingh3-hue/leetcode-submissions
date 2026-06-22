class Solution {
public:
    void storage(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if(ds.size()==nums.size()) {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(find(ds.begin(),ds.end(),nums[i])==ds.end()) ds.push_back(nums[i]);
            else continue;
            storage(nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        storage(nums,ds,ans);
        return ans;
    }
};