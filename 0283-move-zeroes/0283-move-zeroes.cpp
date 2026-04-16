class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) cnt++;
        }
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        for(int i=0;i<cnt;i++){
            nums.push_back(0);
        }
        return;
    }
};