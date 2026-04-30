class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1 || n<=numRows)  return s;
        string a="";
        int toskip=numRows+(numRows-2);
        for(int i=0;i<numRows;i++){
            int j=i;
            while(j<n){
                a+=s[j];
                if(i!=0 && i!=numRows-1 && j+toskip-2*i<n){
                    a+=s[j+toskip-2*i];
                }
                j+=toskip;
            }
        }
        return a;
    }
};