class Solution:
    def subArrayExists(self, arr):
        sumSet = set()
        sum = 0
        for i in arr:
            sum += i
            if sum == 0 or sum in sumSet:
                return True
            else:
                sumSet.add(sum)
        return False


if __name__ == "__main__":
    obj = Solution()
    arr = [4, 2, -3, 1, 6]
    print(obj.subArrayExists(arr=arr))
