numbers=[12,34,5,2,19,20]
#key value pair
# dictionary
# object
# hash table
# overlap with set

# person={
#     'name':'kabir',
#     'address': 'barenda',
#     'age':23,
#     'job':'Banker',


# }
# print(person)
# print(person['job'])
# print(person.keys())
# print(person.values())
# person['language']='python'
# person['name']='Nonsense'

# print(person)

person={
    'Name':'Md kabir Hossain',
    'Parent\'s Name':'Md Sirajul Islam',
    'Mother\'s Name':'Mst. Majeda Begum',
    'School Name':'Kashimpur High school',
    'College Name':'Notre Dame College,Dhaka',
    'University Name':'Jahangirnagar university,Dhaka',
    'Date of Birth:':'24 june 2003',
    'Profession':'Unemployed',
    'year': 2025,
    'colors':['red','orange','apple']
}

# print(person)
# print(person.keys())
# print(person.values())

# print(person['College Name'])

# for item in person:
#     print(item)
# for key,value in enumerate(person):
#     print(key,value)

# for key,value in person.items():
#     print(f"{key}:{value}")


# if person['Name']=='Md Kabir Hossain' in person:
#     print('True')
# else:
#     print("False")

# print(len(person))

# thisdict=dict(age=34,scool=45)
# print(thisdict)
# # a=person.items()
# # print(a)

# t=(('name','kabir'),('address','barenda'))

# thisdict=dict(t)
# print(thisdict)

# person['chadabaji']='khamba'
# print(person)
# del person['chadabaji']
# print(person)


# newdict=person
# newdict=person.copy()
# newdict=dict(person)
# for key,value in person.items():
#     print(f"{key}:{value}")

# for key in person:
#     print(person[key])


#Nested Dictionary

Books={
    'book1':{
        'Name':'travel to land',
        'price':234,
        'publication-year':2000
    },


    'book2':{
        'Name':'bond with muddy',
        'price':100,
        'publication_year':1999
    },

    'book3':{
        'Name':'Death caused by Man',
        'Price':2400,
        'publication_year':1780
    }

}
# print(Books)

# print(Books['book1']['Name'])
# print(Books.keys())
# print(Books.values())
# print(Books.items())

for key,value in Books.items():
    print(key,value)
