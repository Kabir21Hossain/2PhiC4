def b2d(b:str)->int:
    num=1
    result=0
    for i in reversed(b):
        if i=='1':
            result+=num
        num<<=1
    return result

if __name__=='__main__':
    print(b2d("110"))
            
        
        