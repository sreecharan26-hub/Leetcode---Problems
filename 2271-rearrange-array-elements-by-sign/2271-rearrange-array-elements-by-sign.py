class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos=[]
        neg=[]
        n=len(nums)
        for i in range(n):
            if(nums[i]>0):
                pos.append(nums[i])
            else:
                neg.append(nums[i])
        a=[]
        
        for i in range(n//2):
            a.append(pos[i])
            a.append(neg[i])
        return a

        
        