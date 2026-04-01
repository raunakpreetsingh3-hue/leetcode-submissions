class Solution {
public:
    int arraysum(vector<int>& nums,int maxsum){
        int n=nums.size();
        int total=0;
        int sub=1;
        for(int i=0;i<n;i++){
            if(total+nums[i]<=maxsum){
                total+=nums[i];
            }
            else{
                sub++;
                total=nums[i];
            }
        }
        return sub;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int s=0;
        while(low<=high){
            int mid=(low+high)/2;
            int splits=arraysum(nums,mid);
            if(splits<=k){
                s=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return s;
    }
};