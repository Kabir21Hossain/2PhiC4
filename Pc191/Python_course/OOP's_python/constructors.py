# class phone:
#     manufactured='china'

#     def __init__ (self,owner,phone,brand):
#         self.owner=owner
#         self.phone=phone
#         self.brand=brand

    

#     def send_msg(self,phone,msg):
#         text=f'{msg} sent to {phone}'
#         print(text)
    

# my_phone=phone('kabir','sharp','xiau')
# my_phone.send_msg('0298492','i love you')
# print(my_phone.owner,my_phone.brand,my_phone.phone)

# her_phone=phone('janeman','samsung','samu')
# print(her_phone.owner,her_phone.brand,her_phone.phone)
# her_phone.send_msg('9302842','hate you jaan')



class Pen:
    def __init__(self,size=None,brand=None,price=None,color=None):
        self.size=size
        self.brand=brand
        self.price=price
        self.color=color
    
    def show_result(self):
        text=f'You have choosen {self.size} size pen of Brand {self.brand} that costs {self.price} and it has a color of {self.color}'
        print(text)
    

    

my_pen=Pen('2B','Matador',2.34,'black')
his_pen=Pen()

print(my_pen.brand,my_pen.color,my_pen.price,my_pen.size)
my_pen.show_result()
print('break')

print()
print(his_pen.brand,his_pen.color,his_pen.price,his_pen.size)
his_pen.show_result()








    

