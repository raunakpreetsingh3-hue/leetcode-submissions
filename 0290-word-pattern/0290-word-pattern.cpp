class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.size();
        int m=s.size();
        int size=0;
        vector<string>a;
        stringstream ss(s);
        string word;
        while(ss>>word){
            a.push_back(word);
        }
        if(n!=a.size()) return false;
        unordered_map<char,string>mp;
        unordered_map<string,char>mp1;
        for(int i=0;i<a.size();i++){
            if(mp.count(pattern[i]) && mp[pattern[i]]!=a[i]){
                return false;
            }
            if(mp1.count(a[i]) && mp1[a[i]]!=pattern[i]){
                return false;
            }
            mp[pattern[i]]=a[i];
            mp1[a[i]]=pattern[i];
        }
        return true;
    }
};