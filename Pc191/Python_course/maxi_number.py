n1=input("Enter 1st number: ")
n2 = input(" Enter 2nd number:")
n3 =input("Enter 3rd number:")
num1 = int(n1)
num2= int(n2)
num3=int(n3)


if num1 > num2 and num1 > num3:
    print("max:",num1)
elif num2 > num1 and num2 > num3:
    print("max: ",num2)
else:
    print("max:",num3)
