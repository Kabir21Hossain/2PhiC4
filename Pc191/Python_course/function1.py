def full_name(first,last):
    name=f"{first} {last}"
    return name

def find_avg(*param):
    n=len(param)
    s=sum(param)
    return s/n

def power_finder(base,index):
    return base**index

name=full_name("Kabr","hasan")
av=find_avg(42,1,4,1)
p=power_finder(3,6)
print(f"name:{name} average:{av} power:{p}")



