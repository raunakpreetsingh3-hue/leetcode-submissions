class Solution {
public:
    double myPow(double x, int n) {
        long long p=n;
        if(p<0){
            x=1/x;
            p=-p;
        }
        if(p==0) return 1;
        double half=myPow(x,p/2);
        if(p%2==0) return half*half;
        else return half*half*x;
    }
};