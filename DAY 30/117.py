students = []

n = int(input("Enter number of students: "))

for i in range(n):
    print(f"\nStudent {i+1}")
    roll = int(input("Enter the roll no: "))
    name = input("Enter the name: ")
    marks = float(input("Enter the marks: "))

    students.append([roll, name, marks])

print("\nStudent Records")
print("-------------------------")
for student in students:
    print("Roll No:", student[0])
    print("Name:", student[1])
    print("Marks:", student[2])
    print()