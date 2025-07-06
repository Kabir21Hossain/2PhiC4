day=int(input("Enter the favourite day in a week:"))
month = int(input("Enter month:"))
match day:
    case 1 if month==4:
        print("saturday")
    case 2:
        print('sunday')
    case 3:
        print("Monday")
    case 4:
        print("tuesday")
    case 5:
        print("wednesday")
    case 6:
        print("Thursday")
    case 7:
        print("Friday")
    case 9|10|11 if month==1:
        print("May day")
    case _:
        print("No fv day")





