class Solution {
public:
    int mySqrt(int x) {
        long long y=1;
        while(y*y<=x)
        {
            y=y+1;
        }
        return y-1;
    }
};