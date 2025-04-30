# class car:
#     pass


# if __name__=='__main__':

#     my_car=car()
#     print(my_car)

# class car:

#     def __str__(self):
#         return 'this is a car object'
   


# if __name__=='__main__':

#     my_car=car()
#     print(my_car)


class car:

    def __init__(self,brand,year,model):
        self.brand=brand
        self.year=year
        self.model=model
        self.price=0
    def show(self):
        text=f"brand: {self.brand}, model:{self.model}, year:{self.year}, price:{self.price}"
        print(text)

if __name__=='__main__':
    audi=car('audi',1990,'13ad#')
    audi.price=240000
    audi.show()



