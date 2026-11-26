class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='I')
            {
                if(s[i+1]!='V'&&s[i+1]!='X')
                count++;
                else if(s[i+1]=='V')
                {count = count+4;
                i++;
            }
            else
                {count = count+9;
                i++;
            }
            }
            else if(s[i]=='V')
            {
                count=count+5;
            }
            else if(s[i]=='X')
            {
                if(s[i+1]!='L'&&s[i+1]!='C')
                count=count+10;
                else if(s[i+1]=='L')
                {count = count+40;
                i++;
            }
            else
                {count = count+90;
                i++;
            }
            }
            else if(s[i]=='L')
            {
                count=count+50;
                }
            else if(s[i]=='C')
            {
                if(s[i+1]!='D'&&s[i+1]!='M')
                count=count+100;
                else if(s[i+1]=='D')
                {count = count+400;
                i++;
            }
            else
                {count = count+900;
                i++;
            }
            }
            else if(s[i]=='D')
            {

                count=count+500;
                }
            else if(s[i]=='M')
            {
                count=count+1000;
            }
            i++;
        }
        return count;
    }
};