class Solution {
public:
    void give_combination(vector<int>& el,int ind,int target,vector<int>&a,vector<vector<int>>&toput){
        if(target==0){
            toput.push_back(a);
            return;
        }
        for(int i=ind;i<el.size();i++){
            if(i>ind && el[i]==el[i-1]) continue;
            if(el[i]>target) break;
            a.push_back(el[i]);
            give_combination(el,i+1,target-el[i],a,toput);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>a;
        vector<vector<int>>toput;
        give_combination(candidates,0,target,a,toput);
        return toput;
    }
};