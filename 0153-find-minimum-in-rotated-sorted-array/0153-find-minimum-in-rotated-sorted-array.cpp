class Solution {
public:
    int findMin(vector<int>& nums) {
        int  n=nums.size();
        int low=0;
        int high=n-1;
        int mm=INT_MAX;
        while(low<=high){
            if(nums[low]<=nums[high]){
                mm=min(mm,nums[low]);
                break;
            }
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){
                mm=min(mm,nums[low]);
                low=mid+1;
            }
            else{
                mm=min(mm,nums[mid]);
                high=mid-1;
            }
        }
        return mm;
    }
};