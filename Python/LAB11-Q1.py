def lcs(X, Y):
    m, n = len(X), len(Y)
    dp = [[""] * (n+1) for _ in range(m+1)]
    for i in range(m):
        for j in range(n):
            if X[i] == Y[j]:
                dp[i+1][j+1] = dp[i][j] + X[i]
            else:
                dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1], key=len)
    return dp[m][n]
X = "AGGTAB"
Y = "GXTXAYB"
print("LCS:", lcs(X, Y))