class Solution(object):
    def reverse(self, x):
        # x = str(x)
        # if x.startswith("-"):
        #     y = "-"+ x[1:][::-1]
        # else:
        #     y = x[::-1]
        # y = int(y)
        # if y< -2**31 or y> 2**31-1:
        #     return 0
        # return y
        x = str(x)
        if x.startswith("-"):
            y = "-" + x[1:][::-1]
        else:
            y = x[::-1]
        y = int(y)
        if y< -2**31 or y> 2**31:
            return 0
        return y