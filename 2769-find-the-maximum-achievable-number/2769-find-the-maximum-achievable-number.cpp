class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x=num+(2*t);
        int x2=x;
        for(int i=0;i<t;i++){
            num+=1;
            x2-=1;
        }
        if(num==x2) return x;
        return -1;
    }
};