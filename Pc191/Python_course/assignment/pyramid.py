# import pyautogui
# import time

# n=int(input("Enter number of rows for pyramid:"))
# print("Wait 5 seconds to draw your window!")
# time.sleep(5)

# x_start=500
# y_start=300
# gap=30

# for i in range(n):
#     x=x_start-(i*gap//2)
#     y=y_start+i*gap

#     for j in range(i+1):
#         pyautogui.click(x+j*gap,y)
#         time.sleep(0.05)

# print('pyramid drawn')

# for i in range(n):
#     for j in range(i+1):
#         pyautogui.click()
#         print(' ')
#     print('\n')


import pyautogui
import time


# Wait a moment so you can click into your editor
time.sleep(3)

# Take input from user
n = int(pyautogui.prompt(text='Enter a number:', title='Triangle Pattern Input', default='5'))

# Type the number first
pyautogui.typewrite(str(n))
pyautogui.press('enter')

# Print the triangle pattern
for i in range(1, n + 1):
    pyautogui.typewrite('#' * i)
    pyautogui.press('enter')
