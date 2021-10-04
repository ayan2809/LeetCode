class Solution(object):
    def kthLargestNumber(self, nums, k):
        ans=[]
        n=len(nums)
        for i in nums:
            ans.append(int(i))
        ans.sort()
        return str(ans[n-k])
        """
        :type nums: List[str]
        :type k: int
        :rtype: str
        """
        