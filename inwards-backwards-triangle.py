n= int(input("enter the the number: "))
for i in range(0,n):
    for k in range(0,i):
        print(" ",end="")
    for i in range(0,n-i):
        print("#",end="")
    print(end="\n")