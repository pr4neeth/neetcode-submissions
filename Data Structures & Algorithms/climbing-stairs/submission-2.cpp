class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;
        int l = 1;
        int r = 2;
        int c;
        for(int i=3;i<=n;i++){
            c = l+r;
            l = r;
            r = c;
        }
        return c;
    }
};
