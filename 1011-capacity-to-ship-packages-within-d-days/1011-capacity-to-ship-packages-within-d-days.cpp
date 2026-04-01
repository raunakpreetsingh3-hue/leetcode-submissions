class Solution {
public:
    int sumarray(vector<int>&a){
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        return sum;
    }
    bool possible(vector<int>&a,int capacity,int days){
        int n=a.size();
        int cap=0;
        int count=1;
        for(int i=0;i<n;i++){
            if(cap+a[i]<=capacity){
                cap+=a[i];
            }
            else{
                count++;
                cap=a[i];
            }
        }
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=sumarray(weights);
        int k=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(weights,mid,days)){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return k;
    }
};