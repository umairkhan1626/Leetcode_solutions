class Solution(object):
    def rotate(self, nums, k):
        k = k%len(nums)
        r = len(nums)-k
        nums[:] = nums[r:] + nums[0:r]
        return nums
        