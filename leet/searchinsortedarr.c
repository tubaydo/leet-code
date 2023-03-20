int search(int* nums, int numsSize, int target){
    for(int i = 0;i <= numsSize-1;i++)
        if(nums[i] == target)
            return(i);
    return(-1);
}