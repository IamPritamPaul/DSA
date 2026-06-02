from typing import List

"""def find_equilibrium_pivot(arr: List[int]) -> int:
n = len(arr)
total = 0
for i in range(n):
    total += arr[i]
sum = 0
for i in range(n):
    if sum == total - sum - arr[i]:
        return i
    else:
        sum += arr[i]
return -1"""


def find_equilibrium_pivot(arr: List[int]) -> int:
    total_sum = sum(arr)

    left_sum = 0

    for i in range(len(arr)):
        right_sum = total_sum - left_sum - arr[i]

        if left_sum == right_sum:
            return i
        left_sum += arr[i]

    return -1


if __name__ == "__main__":
    arr = [1, 7, 3, 6, 5, 6]
    # arr = [1, 1, 1, 1]
    print(find_equilibrium_pivot(arr))
