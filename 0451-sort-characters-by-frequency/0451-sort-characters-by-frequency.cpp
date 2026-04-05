class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<vector<char>>v(s.size()+1);
        for(auto &it:mp ){
            int freq=it.second;
            char ch=it.first;
            v[freq].emplace_back(ch);
        }
        string temp="";
        for(int i=s.size();i>=1;i--){
            for(char ch:v[i]){
                temp+=string(i,ch);
            }
        }  
        return temp;
    }
};