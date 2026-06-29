class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<int>& array,vector<vector<int>>& ans){
        if(ind==nums.size()){
            ans.push_back(array);
            return;
        }

        //pick
        array.push_back(nums[ind]);
        solve(ind+1,nums,array,ans);
        array.pop_back();
        solve(ind+1,nums,array,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>array;
        solve(0,nums,array,ans);
        return ans;
    }
};