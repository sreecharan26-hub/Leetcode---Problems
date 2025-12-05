class Solution:
    def countPartitions(self, nums: List[int]) -> int:
        a=sum(nums)
        b=len(nums)
        if a%2==0:
            return b-1
        else:
            return 0


        