int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = -1;
    int j = 0;
    *returnSize = 2;

    int *s = (int *)malloc(2*sizeof(int));
    while(i < numsSize)
    {  
        i++;
        j =i+1;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                s[0] = i;
                s[1] = j;
                return(s);
            }
            j++;
        }
    }
    s[0] = -1;
    s[1] = -1;
    return(s);
}
