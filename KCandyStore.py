import math;

t = int(input());

for i in range (t):
    n = int(input());
    k = int(input());
    s = str (math.factorial(n+k-1)//math.factorial(n-1)//math.factorial (k));
    if len(s) > 9:
        k = 9;
        while s[len(s)-k] == '0':
            k-=1;
        result = s[len(s)-k:];
        print(result);
    else:
        print(s);
