import time
import random
def linear(a, k):
    for i in range(len(a)):
        if a[i] == k:
            return i
    return -1
def binary(a, k):
    l, r = 0, len(a) - 1
    while l <= r:
        m = (l + r) // 2
        if a[m] == k:
            return m
        elif a[m] < k:
            l = m + 1
        else:
            r = m - 1
    return -1
