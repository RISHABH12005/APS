def insertion(bucket):
    for i in range(1, len(bucket)):
        key = bucket[i]
        j = i - 1
        while j >= 0 and key < bucket[j]:
            bucket[j + 1] = bucket[j]
            j -= 1
        bucket[j + 1] = key
def bucket(A):
    n = len(A)
    B = [[] for _ in range(n)]
    for i in range(n):
        index = int(n * A[i])
        B[index].append(A[i])
    for i in range(n):
        insertion(B[i])
    result = []
    for i in range(n):
        result.extend(B[i])
    return result
A = [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]
arr = bucket(A)
print("Sorted array:", arr)