def even_odd(num:int)->bool:
    if num & 1==1:
        print('odd')
    else:
        print('even')
    
if __name__=='__main__':
    even_odd(11)
    even_odd(2)
    
        