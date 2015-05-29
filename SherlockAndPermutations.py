import math, sys


MOD = 1000000007


if __name__ == '__main__':
    t = int(sys.stdin.readline())
    
    for i in range(t):
        N, M = list(map(int, sys.stdin.readline().split()))
        print(math.factorial(N + M - 1) // math.factorial(N) // math.factorial(M - 1) % MOD)