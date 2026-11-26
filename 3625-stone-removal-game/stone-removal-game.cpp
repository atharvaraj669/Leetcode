class Solution {
public:
    
    bool canAliceWin(int n){
        if(n<10)
        return false;
        int count = 10;
        while(n>=0)
        {
            n=n-count;
            count--;
        }
        if (count%2!=0)
        return false;
        else
        return true;
    }
};