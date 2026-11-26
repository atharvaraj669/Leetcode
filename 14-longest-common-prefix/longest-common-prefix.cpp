class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        string strs2;
        int lengthh=strs[0].length();
        for(int i=1;i<size;i++)
        {
            if(lengthh>strs[i].length())
            {
                lengthh=strs[i].length();
            }
        }
        int count = 0;
        for(int i=0;i<lengthh;i++)
        {
            for(int j=0;j<size-1;j++)
            {
               if(strs[j][i]==strs[j+1][i])
               count++;
              
            }
            if(count==size-1)
            strs2+=strs[0][i];
            else
            break;
            count=0;
        }
        
        return strs2;
    }
};