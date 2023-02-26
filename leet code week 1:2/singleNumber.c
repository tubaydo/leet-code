int singleNumber(int* nums, int numsSize)
{
    int i = 0;
    int j = numsSize -1;
    int c = 0;

    for(;i <= numsSize-1;i++)
    {
        j = numsSize -1;
        c = 0;
        for(;j >= 0;j--)
        {
            if(nums[i] == nums[j])
                c++;
        }
        if(c == 1)
          return(nums[i]);
    }
    return(nums[i]);
}