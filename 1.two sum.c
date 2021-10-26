int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = (int *)malloc(2 * sizeof(int));
    int *tmp = (int *)malloc((numsSize+1) * sizeof(int));
    int index1, index2;
    int i, j;
    char isok = 0;
    int tmpsum = 0;
    *returnSize=2;
    for (i = 0, j = 0; i < numsSize; i++) {
        //if (nums[i] > target) continue;
        tmp[j++] = i;
        

    }
    tmp[j] = 0;
    do {
        index1 = tmp[tmp[j]];
        for (i = tmp[j] + 1; i < j; i++) {
            index2 = tmp[i];
            tmpsum = nums[index2] + nums[index1];
            if ( tmpsum== target) {
                isok = 1;
                break;
            }
        }
        tmp[j]++;
    } while (!isok);
    res[0] = index1;
    res[1] = index2;
    //printf("[%d,%d]",index1,index2);

    return res;

}