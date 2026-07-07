students = []

def add_student():
    roll = int(input("Enter the roll no. of the student: "))
    name = input("Enter the name of the student ")
    marks = float(input("Enter the marks: "))
    students.append([roll, name, marks])
    print("Student has added successfully!")

def view_students():
    if len(students) == 0:
        print("No Records Found!")
    else:
        print("\nStudent Records")
        for s in students:
            print("Roll No:", s[0])
            print("Name:", s[1])
            print("Marks:", s[2])
            print()

def search_student():
    roll = int(input("Enter Roll No to Search: "))
    for s in students:
        if s[0] == roll:
            print("Roll No:", s[0])
            print("Name:", s[1])
            print("Marks:", s[2])
            return
    print("Student Not Found!")

while True:
    print("\n       Student Management System      ")
    print("1. Add Student")
    print("2. View Students")
    print("3. Search Student")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        add_student()
    elif choice == 2:
        view_students()
    elif choice == 3:
        search_student()
    elif choice == 4:
        print("Thanks")
        break
    else:
        print("Invalid Choice")