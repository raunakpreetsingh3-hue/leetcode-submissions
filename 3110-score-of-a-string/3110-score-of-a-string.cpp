class Solution {
public:
    int scoreOfString(string s) {
        int diff=0;
        for(int i=1;i<s.size();i++){
            int prev_ascii=s[i-1];
            int ascii=s[i];
            int adj_diff=prev_ascii-ascii;
            if(adj_diff<0) adj_diff=adj_diff*(-1);
            diff+=adj_diff;
        }
        return diff;
    }
};