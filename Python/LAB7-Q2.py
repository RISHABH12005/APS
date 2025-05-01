class Edge:
    def __init__(self, u, v, weight):
        self.u = u
        self.v = v
        self.weight = weight
def find(parent, i):
    if parent[i] != i:
        parent[i] = find(parent, parent[i])
    return parent[i]
def union(parent, rank, x, y):
    root_x = find(parent, x)
    root_y = find(parent, y)
    if rank[root_x] < rank[root_y]:
        parent[root_x] = root_y
    elif rank[root_x] > rank[root_y]:
        parent[root_y] = root_x
    else:
        parent[root_y] = root_x
        rank[root_x] += 1
def kruskal(n, edges):
    edges.sort(key=lambda e: e.weight)
    parent = [i for i in range(n)]
    rank = [0] * n
    mst = []
    for edge in edges:
        if find(parent, edge.u) != find(parent, edge.v):
            mst.append(edge)
            union(parent, rank, edge.u, edge.v)
    print("Edge \tWeight")
    for edge in mst:
        print(f"{edge.u} - {edge.v} \t{edge.weight}")
edges = [
    Edge(0, 1, 2),
    Edge(0, 3, 6),
    Edge(1, 2, 3),
    Edge(1, 3, 8),
    Edge(1, 4, 5),
    Edge(2, 4, 7),
    Edge(3, 4, 9)
]
kruskal(5, edges)