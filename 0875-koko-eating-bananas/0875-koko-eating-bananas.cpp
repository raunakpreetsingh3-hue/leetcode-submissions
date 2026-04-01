class Solution {
public:
    int maxi(vector<int>&a){
        int n=a.size();
        int mx=INT_MAX;
        for(int i=0;i<n;i++){
            mx=max(mx,a[i]);
        }
        return mx;
    }
    int func(vector<int>&a,int mid,int h){
        int n=a.size();
        int totalhrs=0;
        for(int i=0;i<n;i++){
            totalhrs+=ceil(double(a[i])/double(mid));
            if(totalhrs>h) return 1;
        }
        return 0;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxi(piles);
        int k=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(func(piles,mid,h)==0){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return k;
    }
};