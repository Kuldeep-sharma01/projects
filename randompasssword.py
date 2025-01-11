import random
import string 
pass_len = 12
char_values = string.ascii_letters + string.digits + string.punctuation

password= "".join([random.choice(char_values) for i in range(pass_len)])
print("your random password : ",password)