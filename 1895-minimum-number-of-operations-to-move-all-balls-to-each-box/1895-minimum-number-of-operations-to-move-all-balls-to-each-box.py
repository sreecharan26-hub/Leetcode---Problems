class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        a=[]
        n=len(boxes)
        for i in range (n):
            sumi=0
            for j in range (n):
                if(i==j):
                    continue
                if(boxes[j]=='1'):
                    sumi+=abs(i-j)
            a.append(sumi)
        return a
        