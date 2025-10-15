class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        a=[]
        n = len(accounts)
        
        for i in range(n):
            sum = 0
            for j in range(len(accounts[i])):
                sum += accounts[i][j]
            a.append(sum)
        return max(a)
            
        
      
        