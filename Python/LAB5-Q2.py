def counting(A, k):
    n = len(A)
    B = [0] * n
    C = [0] * (k + 1)
    for j in range(n):
        C[A[j]] += 1
    for i in range(1, k + 1):
        C[i] += C[i - 1]
    for j in range(n - 1, -1, -1):
        B[C[A[j]] - 1] = A[j]
        C[A[j]] -= 1
    return B
A = [21, 51, 31, 1, 22, 32, 2, 33]
k = max(A)
s = counting(A, k)
print("Counting Sort:", s)
