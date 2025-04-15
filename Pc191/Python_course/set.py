s1={1,2,'a','b','c','a','a'}
s2={'Dhaka','a','c',1,'cumilla','rosh malai'}
s={1,2,'a','b','c','a','a','Dhaka','a','c',1,'cumilla','rosh malai'}

# print(s1)
# for i in s2:
#     print(i)

# print(s1)
# print(s1.issubset(s))
# print(s2.issubset(s))
# print(s.issuperset(s1))
# print(s.issuperset(s2))
# s1.add(34)
# print(s1)
# s1.remove(2)
# #s1.remove(23940)
# s1.discard(23490)
# print(s1)
# a={1,2,3}
# print(sum(a))

l=['jack','rose','yumana','hania']
# s1.update(l)
# print(s1)
# a=s1.union(s2)
# print(a)
# if a==s:
#     print('True')

# a=s1.intersection(s2)
# print(a)
# b=s1.difference(s2)
# print(b)
# c=s1.symmetric_difference(s2)
# print(c)


a=s1 | s2
print(a)
b=s1 & s2
print(b)
c=s1-s2
print(c)
d=s1^s2
print(d)
e=a.union(b,c,d)
f=a|b|c|d
print(e)
print(f)

t=1,2,3,4
e.update(t)
print(e)