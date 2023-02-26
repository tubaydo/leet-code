int singleNonDuplicate(int* nums, int numsSize){
    int i = 0; 

    while(i + 1 < numsSize)
    {
        if(nums[i] == nums[i+1])
            i += 2;
        else
            return(nums[i]);
    }
     return(nums[i]);
