def mp(S):
    S.sort()
    d = float('inf')
    p = (None, None)
    for i in range(len(S) - 1):
        d = abs(S[i] - S[i + 1])
        if d < d:
            d = d
            p = (S[i], S[i + 1])
    return p
S = [4, 15, 8, 1, 19, 0, 12]
r = mp(S)
print(f"The pair with the min diff. is: {r}")
