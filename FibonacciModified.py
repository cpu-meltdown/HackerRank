import math;

A = list(map(int, input().split(" ")))
nth= A[0];
nth1 = A[1];
n = A[2];
for i in range (1, n-1):
    temp = nth1*nth1 + nth;
    nth = nth1;
    nth1 = temp;
print(temp);