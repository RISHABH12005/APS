import heapq
def dk(g,s):
    n = len(g)
    dt = [float('inf')] * n
    dt[s] = 0
    p = [(0,s)]
    while p:
        d, u = heapq.heappop(p)
        for v in range(n):
            if g[u][v] != 99 and dt[v] > d + g[u][v]:
                dt[v] = d + g[u][v]
                heapq.heappush(p, (dt[v], v))
    return dt
g = [
    [0, 3, 99, 7, 99],
    [3, 0, 4, 2, 99],
    [99, 4, 0, 5, 6],
    [7, 2, 5, 0, 4],
    [99, 99, 6, 4, 0]
]
sc = 0
print("Short dist. from vtx 1:")
print(dk(g, sc))