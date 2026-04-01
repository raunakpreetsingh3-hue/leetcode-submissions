class Solution {
public:
    int merge(vector<int>&a,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        int cnt=0;
        vector<int>temp;
        int r=right;
        for(int i=low;i<=mid;i++){
            while(r<=high && (long long)a[i]>2LL*a[r]){
                r++;
            }
            cnt+=r-(mid+1);
        }
        while(left<=mid && right<=high){
            if(a[left]<=a[right]) temp.emplace_back(a[left++]);
            else temp.emplace_back(a[right++]);
        }
        while(left<=mid) temp.emplace_back(a[left++]);
        while(right<=high) temp.emplace_back(a[right++]);
        for(int i=low;i<=high;i++){
            a[i]=temp[i-low];
        }
        return cnt;
    }
    int mergesort(vector<int>&a,int low,int high){
        int cnt=0;
        if(low>=high) return cnt;
        int mid=(low+high)/2;
        cnt+=mergesort(a,low,mid);
        cnt+=mergesort(a,mid+1,high);
        cnt+=merge(a,low,mid,high);
        return cnt;
    } 
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        cnt=mergesort(nums,0,n-1);
        return cnt;
    }
};