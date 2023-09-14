class minbalnceError(Exception):
    pass

class account:
    account_no=101
    def __init__(self,name,balance=1000):

        if balance<1000:
            raise minbalnceError('Account Cannot be created')
        self.name=name
        self.balance=balance
        self.account_number=self.account_no
        account.account_no+=1

    def deposit(self,amt):
        self.balance+=amt

    def withdraw(self,amt):
        if self.balance-amt<1000:
            raise minbalnceError('Amount not sufficient')
        self.balance-=amt

    def show_detail(self):
        print(self.account_no)
        print(self.name)
        print(self.balance)

a1=account('john',2000)
a1.show_detail()
a1.withdraw(1000)
a1.deposit(15000)
a1.show_detail()


a1=account('Ajay',23000)
a1.show_detail()
a1.withdraw(10000)
a1.deposit(1000)
a1.show_detail()



        
