empy=[]

while True:
    print("\n1. Add Employee")
    print("2. View Employees")
    print("3. Search Employee")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        emp_id = int(input("Enter Employee ID: "))
        name = input("Enter Employee Name: ")
        salary = float(input("Enter Salary: "))

        empy.append([emp_id, name, salary])

    elif choice == 2:
        print("\nEmployee Records")
        for emp in empy:
            print("ID:", emp[0])
            print("Name:", emp[1])
            print("Salary:", emp[2])
            print()

    elif choice == 3:
        emp_id = int(input("Enter Employee ID to Search: "))
        found = False

        for emp in empy:
            if emp[0] == emp_id:
                print("ID:", emp[0])
                print("Name:", emp[1])
                print("Salary:", emp[2])
                found = True
                break

        if not found:
            print("Employee Not Found")

    elif choice == 4:
        print("Thanks")
        break

    else:
        print("Invalid Choice")