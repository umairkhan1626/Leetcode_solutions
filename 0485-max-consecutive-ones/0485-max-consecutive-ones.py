class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        m = 0
        a = 0
        for i in nums:
            if i==1:
                m+=1
                a = max(a,m)
            else:
                m=0
        return a

        