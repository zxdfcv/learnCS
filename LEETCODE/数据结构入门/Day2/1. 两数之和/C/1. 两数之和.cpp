/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int *ans;
    for (i = 0; i <= numsSize - 2; i++)
    {
        for (j = i + 1; j <= numsSize - 1; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans = (int*)malloc(sizeof(int) * 2);
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    *returnSize = 2;
    return NULL;
}
