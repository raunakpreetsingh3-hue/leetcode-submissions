class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>nums;
        int fac=1;
        for(int i=1;i<n;i++){
            fac=fac*i;
            nums.push_back(i);
        }
        nums.push_back(n);
        string ans="";
        k=k-1;
        while(true){
            ans=ans+ to_string(nums[k/fac]);
            nums.erase(nums.begin()+k/fac);
            if(nums.size()==0) break;
            k=k%fac;
            fac=fac/nums.size();
        }
        return ans;
    }
};