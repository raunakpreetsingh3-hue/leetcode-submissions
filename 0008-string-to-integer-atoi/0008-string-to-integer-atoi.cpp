class Solution {
public:
    int tocheck(string s,int ind,int n,int sign,long long a,bool started){
        if(ind==n) {
            return a*sign;
        }
        else if(isdigit(s[ind])){
            int digit=s[ind]-'0';
            if(a>(INT_MAX-digit)/10) return (sign==1) ? INT_MAX:INT_MIN;
            a=a*10+digit;
            return tocheck(s,ind+1,n,sign,a,true);
        }
        if(started) return a*sign;
        return 0;
    }
    int myAtoi(string s) {
        int n=s.size();
        int sign=1;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && (s[i]=='-'||s[i]=='+')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        int ans=tocheck(s,i,n,sign,0,false);
        return ans;
    }
};