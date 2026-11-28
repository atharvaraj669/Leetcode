#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lengthh = height.size();
        int left= 0;
        int right =lengthh-1 ;
        int maxar = min(height[0],height[1])*1;
        while(left<right)
        {
           if(maxar<min(height[left],height[right]) * (lengthh-1))
           {
               maxar=min(height[left],height[right]) * (lengthh-1);
           }
           if(height[left]<height[right])
           {
            left++;
            lengthh--;
           }
           else
           {
            right--;
            lengthh--;
           }
           
        }
         return maxar;
    }
};