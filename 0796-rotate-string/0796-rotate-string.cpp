class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        if(s.size()!=goal.size()) return false;
        int n=s.size();
        for(int i=1;i<n;i++){
            string b=s.substr(i)+s.substr(0,i);
            if(b==goal) return true;
        }
        return false;
    }
};