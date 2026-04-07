class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            vector<int>v(26,0);
            for(int j=i;j<n;j++){
                v[s[j]-'a']++;
                int maxi=0;
                int mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(v[k]>0){
                        int p=v[k];
                        mini=min(p,mini);
                        maxi=max(p,maxi);
                    }
                }
                int diff=maxi-mini;
                if(diff>0){
                    cnt+=diff;
                }
            }
        }
        return cnt;
    }
};