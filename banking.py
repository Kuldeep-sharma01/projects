class account :
    def __init__(self,bal,acc):
        self.balance=bal
        self.account_no =acc
        print("your",acc,"numbered account opened with balace",bal,"rs")
    def cr(self,amt):
        self.balance+=amt
        print(amt,"rs is credited to your account")
        print("total balance =",self.balance)
    def dbt(self,amt):
        self.balance-=amt
        print(amt,"rs is debited from your account")
        print("total balance =",self.balance)

acc1 = account(10000,27829)

acc1.dbt(555)
acc1.cr(6849)
acc2 = account(5666,579232)
acc2.dbt(557)  
        
    