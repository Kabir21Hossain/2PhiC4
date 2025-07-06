# class Product:
#     def __init__(self, product_name, price):
#         self.product_name = product_name
#         self.price = price

#     def __repr__(self):
#         return f'{self.product_name}, ${self.price}'

# class Shop:
#     def __init__(self, name):
#         self.name = name
#         self.products = []  # List of available products (as Product objects)
#         self.cart = []      # List of bought products

#     def add_product(self, product_name, price):
#         p = Product(product_name, price)
#         self.products.append(p)

#     def buy_product(self, name):
#         for product in self.products:
#             if product.product_name == name:
#                 self.cart.append(product)
#                 self.products.remove(product)
#                 print('Congrats! You have successfully bought a product.')
#                 return
#         print("Sorry, this product doesn't exist.")

#     def show_cart(self):
#         if not self.cart:
#             print('Cart is empty.')
#         else:
#             print('Products in Cart:')
#             for product in self.cart:
#                 print(product)

# # Testing
# shop = Shop('Khalil Indust')

# # Adding stock
# shop.add_product('dabur amla', 144)
# shop.add_product('coconut', 100)
# shop.add_product('palm oil', 120)
# shop.add_product('olive oil', 200)

# # Buying products
# shop.buy_product('dabur amla')
# shop.show_cart()

# shop.buy_product('coconut')
# shop.show_cart()

# shop.add_product('ramima', 1000)  # Adding new product to stock
# shop.buy_product('noodles')        # Try buying a product not in stock





# class Product:
#     def __init__(self, name, price):
#         self.name = name
#         self.price = price

# class Shop:
#     def __init__(self):
#         self.products = []  # List to store Product objects

#     def add_product(self, product):
#         self.products.append(product)
#         print(f"{product.name} added to the shop.")

#     def buy_product(self, product_name):
#         for product in self.products:
#             if product.name == product_name:
#                 self.products.remove(product)
#                 print(f"Congratulations! You bought {product.name} for ${product.price}.")
#                 return
#         print("Sorry, this product is not available.")

# # Test
# shop = Shop()

# # Create some products
# p1 = Product('Laptop', 1200)
# p2 = Product('Headphones', 150)

# # Add products to shop
# shop.add_product(p1)
# shop.add_product(p2)

# # Try to buy products
# shop.buy_product('Laptop')        # Success
# shop.buy_product('Smartphone')    # Product not available



class Product:
    def __init__(self,name,price):
        self.name=name
        self.price=price
    
    
class Shop:
    def __init__(self,name):
        self.name=name
        self.item=[]
        self.cart=[]

    def add_products(self,p):
        self.item.append(p)
        print(f'{p.name} is added to the shop')
    
    def show_cart(self):
        for x in self.cart:
            if x not in self.cart:
                print('cart is empty')
            else:
                    print(x)

    def buy_product(self,prod):
        for x in self.item:
            if x.name==prod.name:
                self.cart.append(prod)
                print('you have successfully bought it')
                return
        else:
            print('it is not available')
    

        
    

s=Shop('kadil shop')
p2=Product('shampoo',100)
p3=Product('shemai',100)
p4=Product('noodles',100)
p5=Product('pasta',100)
p6=Product('milk',100)

s.add_products(p2)
s.add_products(p3)
s.add_products(p4)
s.add_products(p5)
s.add_products(p6)
s.buy_product(p2)
s.show_cart()


        