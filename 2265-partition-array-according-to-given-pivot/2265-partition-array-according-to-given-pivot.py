class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        less=[]
        more=[]
        pivott=[]
        n=len(nums)
        for i in range(n):
            if(nums[i]<pivot):
                less.append(nums[i])
            elif(nums[i]>pivot):
                more.append(nums[i])
            else:
                pivott.append(nums[i])
        a=[]
        for i in range(len(less)):
            a.append(less[i])
        for i in range(len(pivott)):
            a.append(pivott[i])
        for i in range(len(more)):
            a.append(more[i])
    
        return a

        