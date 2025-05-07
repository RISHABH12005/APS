def isn(b):
    for i in range(1, len(b)):
        k = b[i]
        j = i - 1
        while j >= 0 and k < b[j]:
            b[j + 1] = b[j]
            j -= 1
        b[j + 1] = k
def b(A):
    n = len(A)
    B = [[] for _ in range(n)]
    for i in range(n):
        ix = int(n * A[i])
        B[ix].append(A[i])
    for i in range(n):
        isn(B[i])
    r = []
    for i in range(n):
        r.extend(B[i])
    return r
A = [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]
a = b(A)
print("Sorted arr:", a)
