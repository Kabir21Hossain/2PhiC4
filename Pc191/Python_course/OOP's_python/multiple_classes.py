class Student:
    def __init__(self,name,current_class,roll):
        self.name=name
        self.current_class=current_class
        self.roll=roll

    # def __str__(self):
    #     return f"name:{self.name},class:{self.current_class},roll:{self.roll}"

    def __repr__(self):
        return f"name:{self.name} class:{self.current_class},roll:{self.roll}"
    

class Teachers:
    def __init__(self,name,subject,id):
        self.name=name
        self.subject=subject
        self.id=id

    def __str__(self):
        return f"name:{self.name},subject:{self.subject},id:{self.id}"



class school:

    def __init__(self,school_name,establish_year):
        self.school_name=school_name
        self.established_year=establish_year
        self.students=[]
        self.teachers=[]
    
    def enroll(self,name,current_class,roll):
        s1=Student(name,current_class,roll)
        self.students.append(s1)

    def add_teachers(self,name,subject):
        id=len(self.teachers)+100
        t1=Teachers(name,subject,id)
        self.teachers.append(t1)
    

    def __repr__(self):
        print('----Welcome to our Class-----')
        print('----students---------')
        
        for std in self.students:
            print(std)
        
        print('-----Teachers------')

        for teacher in self.teachers:
            print(teacher)

        return f"thank you"
        

    
    
# kabir=student('kabir','12',125)
# print(kabir)

# teacher=teachers('abir ali','Math',2392)
# print(teacher)


phitron=school('Phitron',2010)
phitron.enroll('kabir','eight',100)
phitron.enroll('asif','nine',34)
phitron.enroll('romeo','ten',1)

phitron.add_teachers('rahman ali',28947)
phitron.add_teachers('akib',483)


print(phitron)
