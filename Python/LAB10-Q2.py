def s(n, t, i=0, p=[]):
    if t == 0:
        print("Subset:", p)
        return
    if i >= len(n) or t < 0:
        return
    s(n, t - n[i], i + 1, p + [n[i]])
    s(n, t, i + 1, p)
n = [3, 34, 4, 12, 5, 2]
t = 9
s(n, t)