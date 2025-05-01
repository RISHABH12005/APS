def maxsegmentsum(A):
    m = float('-inf')
    c = 0
    start = end = s = 0
    for i in range(len(A)):
        c += A[i]     
        if c > m:
            m = c
            start = s
            end = i
        if c < 0:
            c = 0
            s = i + 1
    print(f"The max segment sum is {m}")
    print(f"The corresponding indices are i = {start} and j = {end}")
A = [4, -5, 8, -1, 3, -4.2, 0, 2]
maxsegmentsum(A)
