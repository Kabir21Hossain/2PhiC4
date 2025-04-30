class account:
    Bank='Brac'
    def __init__(self):
        self.balance=0
        self.max_withdraw=10000
        self.min_withdraw=100

    
    def get_balance(self):
        return self.balance
    
    def deposit(self,amount):
        if amount >0:
            self.balance+=amount
            print(f'You have successfully deposited {amount} tk to your account')
        else:
            print(f'You have failed to deposit {amount} tk to your account')

        print(f'your current balance is: {self.get_balance()}')


    def withdraw(self,amount):
        if amount>self.max_withdraw:
            print(f"you cannot withdraw more than {self.max_withdraw}")
            print(f'you have made an unsuccessfull withdrawl')

        elif amount < self.min_withdraw:
            print(f'you cannot withdraw less than {self.min_withdraw}')
            print(f'you have made an unsuccessfull withdrawl')

        elif amount > self.balance:
            print(f'you cannot withdraw more than your current balance')
            print(f'you have made an unsuccessfull withdrawl')

        else:
            self.balance-=amount
            print('You have made a successful withdrwal')
        

            
        print(f'You current Balance is {self.get_balance()}')
    

my_account=account()
your_account=account()
my_account.deposit(2999)
print()
my_account.deposit(-345)
print()
print(my_account.get_balance())
print()
my_account.withdraw(100000)
print()
my_account.withdraw(34)
print()
my_account.withdraw(4999)
print()
my_account.deposit(10000)
print()
print(my_account.get_balance())
print()
my_account.withdraw(2300)

print()
print(my_account.Bank)


    

