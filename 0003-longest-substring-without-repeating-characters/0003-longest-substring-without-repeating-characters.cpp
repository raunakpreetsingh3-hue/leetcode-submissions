class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int n=s.size();
        int len=0;
        int left=0;
        int maxi=0;

        for(int i=0;i<n;i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            len=st.size();
            maxi=max(len,maxi);
        }
        return maxi;
    }
};