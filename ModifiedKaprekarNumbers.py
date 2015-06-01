kaprekars = [];

def isKarprekars(p,q):
    for i in range (p,q+1):
        str1 = str (i*i);
        if len(str1) > 1:
            if len(str1) % 2 == 0:
                l, r = str1[:int(len(str1)/2)], str1[int(len(str1)/2):];
            else:
                l, r = str1[:int(len(str1)/2)], str1[int(len(str1)/2):];
            left = int (l);
            right = int (r);
            if (left + right) == i:
                kaprekars.append(i);
        else:
            if i == 1:
                kaprekars.append(1);
        
p = int(input());

q = int(input());

isKarprekars(p,q);
if len(kaprekars) == 0:
    print("INVALID RANGE");
else:
    for i in range (len(kaprekars)):
        print (kaprekars[i], end=' ');


