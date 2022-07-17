class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        size = len(nums)
        count = size * [0]
        ans = nums[0]
        max_value = ans
        for i in range(1, size):
            ans = max(nums[i], ans + nums[i])
            max_value = max(ans, max_value)
        return max_value