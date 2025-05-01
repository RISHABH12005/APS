def pairsum(A1, A2, x):
    m = {}
    for i, v in enumerate(A1):
        m[v] = i
    for j, v in enumerate(A2):
        c = x - v
        if c in m:
            print(f"Yes, i1 = {m[c]}, i2 = {j}")
            return
    print("No")
A1 = [4, 5, 8, 1, 3, 9, 0, 2]
A2 = [2, 3, 35, 32, 12, 9, 2]
x = 41
pairsum(A1, A2, x)
x = 25
pairsum(A1, A2, x)
