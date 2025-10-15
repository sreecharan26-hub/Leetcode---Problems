class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        n = len(accounts)
        max = 0
        for i in range(n):
            sum = 0
            for j in range(len(accounts[i])):
                sum += accounts[i][j]
            if(sum > max):
                max = sum 
        return max
        
      
        