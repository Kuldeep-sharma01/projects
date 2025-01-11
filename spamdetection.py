p1="make a lot of money"
p2="buy now"
p3="subscribe this"
p4="click this"
message = input("enter your comment : ")
if((p1 in message.lower())or (p2 in message.lower())or (p3 in message.lower())or (p4 in message.lower())):
    print("spam alert!")
else:
    print("genuine")