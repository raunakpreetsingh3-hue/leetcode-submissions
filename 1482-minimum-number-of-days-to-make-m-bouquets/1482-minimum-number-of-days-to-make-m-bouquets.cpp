class Solution {
public:
    int possible(vector<int>&a,int day,int m,int k){
        int n=a.size();
        int count=0;
        int bouquet=0;
        for(int i=0;i<n;i++){
            if(a[i]<=day){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
            }
            else count=0;
        }
        return bouquet;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        if(((long long)m*(long long)k)>n) return -1;
        int mn=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(m<=possible(bloomDay,mid,m,k)){
                mn=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return mn;
    }
};