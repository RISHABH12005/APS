def partition(a, l, h):
    p = a[h]
    i = l - 1
    for j in range(l, h):
        if a[j] <= p:
            i += 1
            a[i], a[j] = a[j], a[i]
    a[i + 1], a[h] = a[h], a[i + 1]
    return i + 1
def quick(a, l, h):
    if l < h:
        pi = partition(a, l, h)
        quick(a, l, pi - 1)
        quick(a, pi + 1, h)
