def pt(a, l, h):
    p = a[h]
    i = l - 1
    for j in range(l, h):
        if a[j] < p:
            i += 1
            a[i], a[j] = a[j], a[i]
    a[i + 1], a[h] = a[h], a[i + 1]
    return i + 1
def q(a, l, h):
    if l < h:
        pi = pt(a, l, h)
        q(a, l, pi - 1)
        q(a, pi + 1, h)
a= [21, 51, 31, 1, 22, 32, 2, 33]
q(a, 0, len(a) - 1)
print("Quick Sort:", a)
