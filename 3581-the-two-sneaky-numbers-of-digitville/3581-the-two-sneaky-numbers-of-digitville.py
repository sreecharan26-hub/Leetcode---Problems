from typing import List

class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        a = [0] * 100        
        for i in nums:       
            a[i] += 1
        
        b = []
        for i in range(len(a)):  
            if a[i] == 2:
                b.append(i)
        
        return b
