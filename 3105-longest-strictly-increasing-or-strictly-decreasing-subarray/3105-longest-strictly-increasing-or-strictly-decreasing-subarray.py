class Solution(object):
    def longestMonotonicSubarray(self, nums):
        ci=1
        cd=1
        la = 1
        for i in range(len(nums)-1):
            if(nums[i]>nums[i+1]):
                cd+=1
                ci=1
            elif(nums[i+1]>nums[i]):
                ci+=1
                cd=1
            else:
                ci=1
                cd=1
            la = max(la,ci,cd)
        return la
        