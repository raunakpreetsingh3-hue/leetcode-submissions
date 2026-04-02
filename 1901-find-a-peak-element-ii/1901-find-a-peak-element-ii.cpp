class Solution {
public:
    //max_element(a[0][mid],a[n-1][mid]);
    int max_el(vector<vector<int>>&a,int n,int mid){
        int maxi=0;
        for(int i=1;i<n;i++){
            if(a[i][mid]>a[maxi][mid]){
                maxi=i;
            }
        }
        return maxi;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int ind=max_el(mat,n,mid);
            int right=-1,left=-1;
            if(mid>0) left=mat[ind][mid-1];
            if(mid<m-1) right=mat[ind][mid+1];
            if(mat[ind][mid]>left && mat[ind][mid]>right){
                return {ind,mid};
            }
            else if(mat[ind][mid]<right) low=mid+1;
            else high=mid-1;
        }
        return {-1,-1};
    }
};