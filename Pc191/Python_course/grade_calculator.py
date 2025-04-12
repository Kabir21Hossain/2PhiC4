marks =list(map(float,input("Enter marks for 5 subject separated by space: ").split()))

total=sum(marks)
percentage= total/len(marks)

if percentage >=90:
    grade="A+"
elif percentage >=80:
    grade="A"
elif percentage >=70:
    grade="B"
elif percentage >= 60:
    grade="C"
elif percentage >=50:
    grade="D"
else:
    grade="F"

print("total Marks:",total)
print("Percentage:",round(percentage,2))
print("Grade:",grade)