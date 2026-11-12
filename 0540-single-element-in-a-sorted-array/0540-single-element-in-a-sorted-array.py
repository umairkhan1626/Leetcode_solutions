class Solution(object):
    def singleNonDuplicate(self, nums):
        a = 0
        for i in nums:
            a ^= i
        return a
        