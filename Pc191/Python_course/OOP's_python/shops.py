# class attribute vs instance attribute
# Every objects shares the class attributes where instance attribute is different for every objects

# class shop:
#     cart=[] # class attribute

#     def __init__(self,buyer):
#         self.buyer=buyer
    
#     def add_to_cart(self,item):
#         self.cart.append(item)

#     def show_result(self):
#         text=f'I have bought:{self.cart}'
#         print(text)
    

# me=shop('kabir')
# me.add_to_cart('pen')
# me.add_to_cart('khata')
# me.add_to_cart('shirt')
# me.show_result()



# you=shop('rai')
# you.add_to_cart('body wash')
# you.add_to_cart('face wash')
# you.show_result()



class shop:
    shopping_mall='Bashundhara'

    def __init__(self,buyer):
        self.buyer=buyer
        self.cart=[] # it's an instance attribute


    def add_to_cart(self,item):
        self.cart.append(item)
    
    def show_result(self):
        text=f'I have bought: {self.cart}'
        print(text)
    

me=shop('kabir')
me.add_to_cart('shirt')
me.add_to_cart('pant')
me.add_to_cart('sun glass')
me.show_result()
print()

you=shop('rai')
you.add_to_cart('body wash')
you.add_to_cart('multan')
you.add_to_cart('face wash')
you.show_result()