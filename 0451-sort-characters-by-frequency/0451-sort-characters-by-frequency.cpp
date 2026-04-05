class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](auto&a,auto&b){
            return a.second>b.second;
        });
        string temp="";
        for(int i=0;i<v.size();i++){
            temp+=string(v[i].second,v[i].first);
        }  
        return temp;
    }
};