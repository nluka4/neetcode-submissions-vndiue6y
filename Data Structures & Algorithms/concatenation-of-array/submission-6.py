class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        res = []
        i = 0

        while i < 2:
            for num in nums:
                res.append(num);
            i+=1
        return res
        