def find_equilibrium_pivot(arr: list) -> int:
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
    return -1


if __name__ == "__main__":
    # arr = [1, 7, 3, 6, 5, 6]
    arr = [1, 1, 1, 1]
    print(find_equilibrium_pivot(arr))
