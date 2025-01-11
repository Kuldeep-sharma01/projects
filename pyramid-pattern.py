n= int(input("enter the the number: "))
for i in range(0,n):
    for k in range(0,n-i-1):
        print(" ",end="")
    for i in range(0,i+1):
        print("#",end="")
    for i in range(0,i):
        print("#",end="")
    print(end="\n")
for i in range(0,n-1):
    for k in range(0,i+1):
        print(" ",end="")
    for i in range(0,n-i-1):
        print("#",end="")
    for k in range(0,i):
        print("#",end="")
    print(end="\n")
