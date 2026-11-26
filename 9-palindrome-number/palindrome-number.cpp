class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long newint=0;
        int temp=x,r;
        while(temp>0)
        {
            r=temp%10;
            newint=newint*10+r;
            temp=temp/10;
        }
        if(newint==x)
        return true;
        else
        return false;
    }
};