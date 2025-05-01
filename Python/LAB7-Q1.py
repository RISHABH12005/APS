import sys
def prim(graph):
    n = len(graph)
    selected = [False] * n
    key = [sys.maxsize] * n
    parent = [None] * n
    key[0] = 0
    parent[0] = -1
    for _ in range(n):
        min_key = sys.maxsize
        u = -1
        for v in range(n):
            if not selected[v] and key[v] < min_key:
                min_key = key[v]
                u = v
        selected[u] = True
        for v in range(n):
            if graph[u][v] and not selected[v] and graph[u][v] < key[v]:
                key[v] = graph[u][v]
                parent[v] = u
    print("Edge \tWeight")
    for i in range(1, n):
        print(f"{parent[i]} - {i} \t{graph[i][parent[i]]}")
graph = [
    [0, 2, 0, 6, 0],
    [2, 0, 3, 8, 5],
    [0, 3, 0, 0, 7],
    [6, 8, 0, 0, 9],
    [0, 5, 7, 9, 0]
]
prim(graph)
