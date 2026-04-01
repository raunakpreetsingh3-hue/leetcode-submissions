class Solution {
public:
    vector<int>generaterow(int r){
        long long ans = 1;
        vector<int>ansrow;
        ansrow.emplace_back(1);
        for(int c=1;c<r;c++){
            ans=ans*(r-c);
            ans=ans/c;
            ansrow.emplace_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++){
            result.emplace_back(generaterow(i));
        }
        return result;
    }
};