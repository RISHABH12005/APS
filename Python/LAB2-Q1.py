def swap(x, y):
    return y, x
def bubble(A):
    n = len(A)
    l = n
    P = 1
    while P < n:
        E = 0
        for i in range(l - 1):
            if A[i] > A[i + 1]:
                A[i], A[i + 1] = swap(A[i], A[i + 1])
                E += 1
        if E == 0:
            break
        l -= 1
        P += 1
    return A
def add(x, y, z):
    w = x + y + z
    return w
if __name__ == '__main__':
    a = [64, 34, 25, 12, 22, 11, 90]
    print("Unsorted Arr:", a)
    sa = bubble(a)
    print("Sorted Arr:", sa)
    sr = add(10, 20, 30)
    print("Sum :", sr)