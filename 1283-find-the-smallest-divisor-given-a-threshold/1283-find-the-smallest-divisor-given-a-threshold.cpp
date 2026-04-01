class Solution {
public:
    bool sumcal(vector<int>&a,int divisor,int threshold){
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i]+divisor-1)/divisor;
            if(sum>threshold) return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int d=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumcal(nums,mid,threshold)){
                d=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return d;
    }
};