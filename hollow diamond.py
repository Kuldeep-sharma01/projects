n=4
for i in range(n):
    if(i<1):
        print(" "*(n-i),"*"*(i+1))
    else:
        print(" "*(n-i),"*",end="")
        print(" "*(2*i-2),"*")
for i in range(n-1):
    if(i>n-3):
        print(" "*(i+2),"*")
    else:
        print(" "*(i+2),"*",end="")
        print(" "*(n-2*i-2),"*")