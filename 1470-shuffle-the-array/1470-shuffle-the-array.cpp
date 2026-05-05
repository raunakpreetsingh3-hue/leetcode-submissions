class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=nums.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            a.emplace_back(nums[i]);
            a.emplace_back(nums[i+n]);
        }
        return a;
    }
};