n=5
for i in range(0,n):
    print(" "*(n-i),"*"*(2*i+1))
for i in range(0,n-1):
    print(" "*(i+2),"*"*(2*(n-i)-3))