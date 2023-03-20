int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int i,a,j=0;
    int c= 0;
    int *arr;
    *returnSize = 2;
    for(;i < numsSize;i++)
    {
        if(nums[i]==target)
            j++;
    }
    if(j == 0 || numsSize == 0)
    {
        arr=(int*)malloc(sizeof(int)*2);
        arr[0]= -1;
        arr[1]= -1;
        return(arr);
    }
    if(numsSize == 1 && j == 1)
    {
        arr=(int*)malloc(sizeof(int)*2);
        arr[0]= 0;
        arr[1]= 0;
        return(arr);
    }
    if(j == 1)
    {
        arr=(int*)malloc(sizeof(int)*2);
   for(i = 0;i < numsSize;i++)
    {
      if(nums[i]==target)
      {
          arr[0]= i;
          arr[1]= i;
          return(arr);
      }
    }
    }
    arr=(int*)malloc(sizeof(int)*2);
    for(i = numsSize -1 ;i > 0;i--)
    {
        if(nums[i]==target)
        {
          arr[1]= i;
              break;
        }
    }
    for(i = 0;i < numsSize;i++)
    {
      if(nums[i]==target)
      {
          arr[0]= i;
              break;
      }
    }
    return(arr);
}