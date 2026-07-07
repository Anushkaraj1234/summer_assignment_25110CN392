while True:
    print("\n1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 5:
        print("Thanks")
        break

    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))

    if choice == 1:
        print("SUM=",a+b)
    elif choice == 2:
        print("SUBTRACTION=",a -b)
    elif choice == 3:
        print("MULTIPLICATION=", a* b)
    elif choice == 4:
        if b != 0:
            print("DIVISION=",a /b)
        else:
            print("Division by zero is not possible.")
    else:
        print("Invalid Choice")