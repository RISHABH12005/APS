class E:
    def __init__(self, u, v, w):
        self.u = u
        self.v = v
        self.w = w
def f(p, i):
    if p[i] != i:
        p[i] = f(p, p[i])
    return p[i]
def u(p, r, x, y):
    rtx = f(p, x)
    rty = f(p, y)
    if r[rtx] < r[rty]:
        p[rtx] = rty
    elif r[rtx] > r[rty]:
        p[rty] = rtx
    else:
        p[rty] = rtx
        r[rtx] += 1
def k(n, e):
    e.sort(key=lambda e: e.w)
    p = [i for i in range(n)]
    r = [0] * n
    m = []
    for e in es:
        if f(p, e.u) != f(p, e.v):
            m.append(e)
            u(p, r, e.u, e.v)
    print("Edge \tWeight")
    for e in m:
        print(f"{e.u} - {e.v} \t{e.w}")
es = [
    E(0, 1, 2),
    E(0, 3, 6),
    E(1, 2, 3),
    E(1, 3, 8),
    E(1, 4, 5),
    E(2, 4, 7),
    E(3, 4, 9)
]
k(5, es)
