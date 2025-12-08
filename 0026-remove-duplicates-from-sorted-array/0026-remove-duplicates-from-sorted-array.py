class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        a = []
        a.append(nums[0])
        for i in range(1, n):
            if nums[i] != nums[i - 1]:
                a.append(nums[i])

        for i in range(len(a)):
            nums[i] = a[i]
        return len(a)
