class Solution {
public:
    bool issafe(string s){
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if(s[i-1]!=s[n-i]) return false;
        }
        return true;
    }
    void solve(int start,vector<string>&ds,vector<vector<string>>&ans, string s){
        if(start==s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=start;i<s.size();i++){
            string ss=s.substr(start,i-start+1);
            if(issafe(ss)){
                ds.push_back(ss);
                solve(i+1,ds,ans,s);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ds;
        vector<vector<string>>ans;
        solve(0,ds,ans,s);
        return ans;
    }
};