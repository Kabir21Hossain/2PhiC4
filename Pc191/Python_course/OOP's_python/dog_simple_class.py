class dog:

    def __init__(self,name,breed):
        self.name=name
        self.breed=breed
        self.age=0
    
    def bark(self):
        return f"{self.name} says: woof!"
    
    def info(self):
        return f"Name: {self.name}, Breed: {self.breed}, age: {self.age}"
    
    def is_puppy(self):
        return self.age<2
    

if __name__=='__main__':

    dog1=dog('buddy','Golden Retriever')
    dog2=dog('Max','Beagle')

    dog1.age=34
    dog2.age=1

    print(dog1.info())
    print(dog2.info())

    if(dog1.is_puppy()):
        print('yes puppy')
    else:
        print("no puppy")
    
    if(dog2.is_puppy()):
        print('yes puppy')
    else:
        print("no puppy")
    

    print(dog1.bark())
    print(dog2.bark())

        