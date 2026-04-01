class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int>a;
        a.reserve(2);
        for(auto it:mp){
            if(it.second>1){
                a.emplace_back(it.first);
                break;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(mp.find(i)==mp.end()){
                a.emplace_back(i);
                break;
            }
        }
        return a;
    }
};