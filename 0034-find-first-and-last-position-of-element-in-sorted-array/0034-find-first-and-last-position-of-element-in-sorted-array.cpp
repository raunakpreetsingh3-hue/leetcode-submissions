class Solution {
public:
    int firstocc(vector<int>&a,int target){
        int n=a.size();
        int low=0,high=n-1;
        int lower=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==target){
                lower=mid;
                high=mid-1;
            } 
            else if(target>a[mid]) low=mid+1;
            else high=mid-1;
        }
        return lower;
    }
        int lastocc(vector<int>&a,int target){
            int n=a.size();
            int low=0,high=n-1;
            int higher=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(a[mid]==target){
                    higher=mid;
                    low=mid+1;
                }
                else if(target>a[mid]) low=mid+1;
                else high=mid-1;
            }
            return higher;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=firstocc(nums,target);
        int l=lastocc(nums,target);
        return {f,l};
    }
};