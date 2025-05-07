def mss(A):
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
    print(f"max segment sum is {m}")
    print(f"corresponding indices are i = {start} & j = {end}")
A = [4, -5, 8, -1, 3, -4.2, 0, 2]
mss(A)
