import time
import random
import matplotlib.pyplot as mp
def merge(a):
    if len(a) > 1:
        m = len(a) // 2
        l = a[:m]
        r = a[:]
        merge(l)
        merge(r)
        i = j = k = 0
        while i < len(l) and j < len(r):
            if l[i] < r[j]:
                a[k] = l[i]
                i += 1
            else:
                a[k] = r[j]
                j += 1
            k += 1
        while i < len(l):
            a[k] = l[i]
            i += 1
            k += 1
        while j < len(r):
            a[k] = r[j]
            j += 1
            k += 1

t = []
e = [100, 500, 1000, 5000, 10000, 20000]
for n in e:
    a = [ran.randint(0, 100000) for _ in range(n)]
    st = t.time()
    merge(a)
    et = t.time()
    t.append(et - st)
    print(f"Time taken to sort {n} elements: {et - st:.6f} sec")
mp.plot(e, t, marker='o')
mp.xlabel('Number of elements (n)')
mp.ylabel('Time taken (sec)')
mp.title('Merge Sort Time Complexity')
mp.grid(True)
mp.show()
