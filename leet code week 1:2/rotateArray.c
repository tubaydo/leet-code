void reverse(int* arr, int i, int j){
    int temp;
    while (i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotate(int* nums, int numsSize, int k){
    k = k % numsSize;
    if (k == 0 || numsSize == 1)
        return; 
    reverse(nums, 0, numsSize-1); 
    reverse(nums, 0, k-1); 
    reverse(nums, k, numsSize-1);
    return;
}