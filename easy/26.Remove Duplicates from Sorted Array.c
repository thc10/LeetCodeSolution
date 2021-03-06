int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0){
        return 0;
    }
    int i = 1, j = 0;
    while(i < numsSize){
        if (nums[i] != nums[j]){
            nums[++j] = nums[i];
        }
        i++;
    }
    return j+1;
}