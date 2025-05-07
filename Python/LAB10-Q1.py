js = [('a', 2, 100), ('b', 1, 19), ('c', 2, 27), ('d', 1, 25), ('e', 3, 15)]
js.sort(key=lambda x: x[2], reverse=True)
n = max(j[1] for j in js)
s = [None] * n
p = 0
for j in js:
    for i in range(min(n, j[1]) - 1, -1, -1):
        if s[i] is None:
            s[i] = j[0]
            p += j[2]
            break
print("Job order:", [j for j in s if j])
print("Total profit:", p)