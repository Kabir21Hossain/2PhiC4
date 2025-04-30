class shoppings:
    def __init__(self,name):
        self.name=name
        self.cart=[]
    
    def add_to_cart(self,item_name,price,quantity):
        product={
            'item_name':item_name,
            'price':price,
            'quantity':quantity
        }

        self.cart.append(product)

    def checkout(self,amount):
        total=0
        for product in self.cart:
            total+=product['price']*product['quantity']
        
        print(f'Total bill:{total}')
        print(f'You have paid:{amount}')
    
        if amount > total:
            extra_money=int(total-amount)
            print(f'Here is your items and extra  {extra_money} tk')
        
        elif  amount < total:
            extra_money=abs(total-amount)
            print(f"You have to pay more {extra_money} tk")
        else:
            print("Here is your items")
    
    def remove_from_cart(self,item):
        
        for product in self.cart:
            if product['item_name']==item:
                self.cart.remove(product)
    
    def product_list(self):
        print(self.cart)



if __name__=='__main__':

    kabir=shoppings('kabir')
    kabir.add_to_cart('super glue',30,5)
    kabir.add_to_cart('biriyani',350,4)
    kabir.add_to_cart('yogurt',320,3)
    kabir.remove_from_cart('super glue')
    kabir.product_list()

    # print(kabir.cart)
    # print(kabir.cart)
    kabir.checkout(2300)



    
