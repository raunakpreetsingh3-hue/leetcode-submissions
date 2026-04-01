class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            int ans=nums[nums[i]];
            temp.push_back(ans);
        }
        return temp;
    }
};