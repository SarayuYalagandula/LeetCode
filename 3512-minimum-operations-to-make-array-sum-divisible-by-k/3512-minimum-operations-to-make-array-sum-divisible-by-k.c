int minOperations(int* nums, int numsSize, int k) {
    int i=0,sum=0;
    while(i<numsSize){
        sum=sum+nums[i];
        i++;
    }
    int ret=sum%k;
    return ret;
}