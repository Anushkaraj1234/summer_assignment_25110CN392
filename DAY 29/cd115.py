string = input("Enter a string: ")

while True:
    print("\n1. Length")
    print("2.Uppercase")
    print("3. Lowercase")
    print("4.Reverse")
    print("5.Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        print("Length =", len(string))

    elif choice == 2:
        print("Uppercase:",string.upper())

    elif choice == 3:
        print("Lowercase:",string.lower())

    elif choice == 4:
        print("Reverse:",string[::-1])

    elif choice == 5:
        break

    else:
        print("Invalid Choice")