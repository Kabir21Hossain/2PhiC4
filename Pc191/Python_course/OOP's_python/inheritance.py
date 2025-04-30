#base class,parent class,common attribute + functionality class
# derived class, child class, uncommon attribute + functionality

class Device:
    def __init__(self,brand,price,color,origin):
        self.brand=brand
        self.price=price
        self.color=color
        self.origin=origin

    
    def run(self):
        return f'Running gadget:{self.brand}'
    def hehe(self):
        print('nonsense')

    

    

class Laptop:
    def __init__(self,memory,ssd):
        self.ssd=ssd
        self.memory=memory

    def coding(self):
        return f' learning python and practicing'
    
class Phone(Device):
    def __init__(self,brand,price,origin,color,dual_sim):
        self.dual_sim=dual_sim
        super().__init__(brand,price,color,origin)

    def phone_call(self,number,txt):
        return f'sending SMS:{txt} to :{number}'
    
    def __repr__(self):
        return f'phone:{self.dual_sim}\nbrand:{self.brand}\ncolor:{self.color}\norigin:{self.origin}\nprice:{self.price}'
    
    

class Camera:
    def __init__(self,pixel):
       
        self.pixel=pixel

    def change_lens(self):
        pass




# inheritance

my_phone=Phone('iphone',120000,'china','white',True)
# l=my_phone.phone_call('75643268754','no more text')
# print(l)
# print(my_phone.brand)
print(my_phone)
# my_phone.hehe()

