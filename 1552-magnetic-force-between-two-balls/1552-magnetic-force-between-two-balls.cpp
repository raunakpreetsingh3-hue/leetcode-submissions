class Solution {
public:
    bool possible(vector<int>&a,int dis,int m){
        int n=a.size();
        int count=1;
        int last=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-last>=dis){
                count++;
                last=a[i];
            }
            if(count>=m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=1;
        int k=0;
        int high=position[n-1]-position[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(position,mid,m)){
                k=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return k;
    }
};