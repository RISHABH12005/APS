import sys
def pr(g):
    n = len(g)
    s = [False] * n
    k = [sys.maxsize] * n
    p = [None] * n
    k[0] = 0
    p[0] = -1
    for _ in range(n):
        mk = sys.maxsize
        u = -1
        for v in range(n):
            if not s[v] and k[v] < mk:
                mk = k[v]
                u = v
        s[u] = True
        for v in range(n):
            if g[u][v] and not s[v] and g[u][v] < k[v]:
                k[v] = g[u][v]
                p[v] = u
    print("Edge \tWeight")
    for i in range(1, n):
        print(f"{p[i]} - {i} \t{g[i][p[i]]}")
g = [
    [0, 2, 0, 6, 0],
    [2, 0, 3, 8, 5],
    [0, 3, 0, 0, 7],
    [6, 8, 0, 0, 9],
    [0, 5, 7, 9, 0]
]
pr(g)
