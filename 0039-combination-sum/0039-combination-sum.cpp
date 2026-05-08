class Solution {
public:
    vector<int>giveCombination(vector<int>&a,int ind,int target,vector<int>&ds,vector<vector<int>>&toput){
        if(ind==a.size()){
            if(target==0){
                toput.push_back(ds);
            }
            return {};
        }
        if(a[ind]<=target){
            ds.push_back(a[ind]);
            giveCombination(a,ind,target-a[ind],ds,toput);
            ds.pop_back();
        }
        giveCombination(a,ind+1,target,ds,toput);
        return {};
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>a;
        vector<int>ds;
        int ind=0;
        giveCombination(candidates,ind,target,ds,a);
        return a;
    }
};