class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        int closest=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    sum=nums[i]+nums[j]+nums[k];
                    if(abs(sum-target)<abs(closest-target)){
                        closest=sum;
                    }
                }
            }
        }
        return closest;
    }
};