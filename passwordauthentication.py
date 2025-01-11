data={}
def pwd():
    UserName=input("username :")
    password= input("password :")
    if(len(password)<8):
        print("your password is too short (less than 8 characters):")
        password= input("password :")
    data.update({"username":UserName ,
                "password": password})
pwd()
pwd()
print(data)