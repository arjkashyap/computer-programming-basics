#!/usr/bin/python3.6

t = int(input())

while t> 0:
    a, b = list(map(int, str(input()).split()))
    tmp = a
    for i in range(a+1, b+1):
        tmp ^= i
    if ( tmp & (1) ):
        print("Odd ")
    else:
        print("Even")

    t -= 1
