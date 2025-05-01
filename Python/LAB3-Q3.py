def recursive(n):
    if n <= 1:
        return n
    return recursive(n - 1) + recursive(n - 2)
def iterative(n):
    if n <= 1:
        return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b
if __name__ == '__main__':
    n = 1000
    k = -1
    a = list(range(n))

    s = t.time()
    r = recursive(20)
    e = t.time()
    print(f'Fibonacci (Recursive) = {r}, Time: {e - s:.6f} sec')

    s = t.time()
    i = fibonacci_iterative(20)
    e = t.time()
    print(f'Fibonacci (Iterative) = {i}, Time: {e - s:.6f} sec')
    