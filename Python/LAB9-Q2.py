def f(p, i):
    if p[i] == i:
        return i
    return f(p, p[i])
def un(p, r, x, y):
    xrt = f(p, x)
    yrt = f(p, y)
    if r[xrt] < r[yrt]:
        p[xrt] = yrt
    elif r[yrt] < r[xrt]:
        p[yrt] = xrt
    else:
        p[yrt] = xrt
        r[xrt] += 1
def k(g):
    n = len(g)
    e = []
    for i in range(n):
        for j in range(i, n):
            if g[i][j] not in (0, 999):
                e.append((g[i][j], i, j))
    e.sort()
    p = list(range(n))
    r = [0] * n
    mc = 0
    for c, u, v in e:
        if f(p, u) != f(p, v):
            un(p, r, u, v)
            print(f"Edge ({u+1},{v+1}) = {c}")
            mc += c
    print("Min cost =", mc)
g = [
    [0, 20, 2, 999],
    [20, 0, 15, 5],
    [2, 15, 0, 25],
    [999, 5, 25, 0]
]
k(g)
