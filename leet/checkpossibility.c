#include "stdbool.h"
bool checkPossibility(int* nums,int numsSize)
{
        bool flag = false;
        int i = 1;
        for(int i =1 ;i < numsSize;i++)
        {    
            if (nums[i - 1] > nums[i])
            {
                if (flag)
                    return(false);
                flag = true;
                if(i - 2 >= 0 && nums[i - 2] > nums[i]) 
                    nums[i] = nums[i - 1];
            } 
        }
return(true);
}