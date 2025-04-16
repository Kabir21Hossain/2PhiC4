
# f=open('demo.txt','w')
# f.write("hi, welcome to this txt file, and I love you man ")
# f.close()
# l=open('demo.txt','r')
# text=l.read()
# print(text)
# print(text)

# for x in l:
#     print(x)
# l.close()

# f=open('demo.txt','a')
# f.write("a never ending love for you, where you may lose yourself")
# f.close()
# f=open('demo.txt','r')
# print(f.read())
# f.close()

# f=open('demo.txt','x')
# print(f.read())
# f=open("demo.txt",'r')
# print(f.read())

import os

if os.path.exists('demo.txt'):
    os.remove('demo.txt')
else:
    print("it doesn't exist")

os.rmdir('paknami')

