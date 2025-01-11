import random
computer = random.choice([-1,0,1])
you= input("enter your choice :")
data={
    "snake": 1,
    "water":-1,
    "gun":0
}
y= data[you]
# if( computer==-1 and y ==1 or computer==0 and y==-1 or computer==1 and y==0):
#     print("You win!")
# else:
#     print("You Lose")
if ((computer-y)==-1 or (computer-y) ==2):
    print("You lose")
elif(computer==y):
    print("it is a draw")
else:
    print("hurrah")