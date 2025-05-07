import sys
def mco(p):
    n = len(p) - 1
    m = [[0] * n for _ in range(n)]
    s = [[0] * n for _ in range(n)]
    for l in range(2, n+1):
        for i in range(n - l + 1):
            j = i + l - 1
            m[i][j] = sys.maxsize
            for k in range(i, j):
                q = m[i][k] + m[k+1][j] + p[i]*p[k+1]*p[j+1]
                if q < m[i][j]:
                    m[i][j] = q
                    s[i][j] = k
    def o(i, j):
        if i == j:
            return f"M{i+1}"
        else:
            return f"({o(i, s[i][j])}{o(s[i][j]+1, j)})"
    print("Min no. of multiplications:", m[0][n-1])
    print("Optimal order:", o(0, n-1))
d = [40, 20, 30, 10, 30]
mco(d)