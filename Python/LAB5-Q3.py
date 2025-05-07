def bkt(A):
    n = len(A)
    B = [[] for _ in range(n)]
    for v in A:
        i = int(n * v)
        B[i].append(v)
    for i in range(n):
        B[i].sort()
    r = []
    for bkt in B:
        r.extend(bkt)
    return r
A = [0.21, 0.51, 0.31, 0.01, 0.22, 0.32, 0.02, 0.33]
s = bkt(A)
print("Bucket Sort:", s)
