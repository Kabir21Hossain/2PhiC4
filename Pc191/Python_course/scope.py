balance=3000
def cost(item,price):
    # global variable can be used in a function without using global keyword,but you can't modify
    # if you want to modify,then use global keyword
    global balance
    balance=balance-price
    print(f"the main balance after you have bought {item} that cost {price}:",balance)

cost("khata",500)
print("Main balance:",balance)

    