class Solution:
    def numTimesAllBlue(self, flips: List[int]) -> int:
        a = 0
        cc = 0
        ss = 0

        for i in flips:
            ss += 1
            
            if i > a:
                a = i
            
            if ss == a:
                cc += 1
        return cc 