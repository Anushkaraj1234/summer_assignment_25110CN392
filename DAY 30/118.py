lib= {}

while True:
    print("\n1. Add Book")
    print("2. View Books")
    print("3. Search Book")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        name = input("Enter the name of the book: ")
        author = input("Enter the author name: ")
        lib[name] = author
        print("Book has added successfully")

    elif choice==2:
        print("\nLibrary Books")
        for book, author in lib.items():
            print(book, "-", author)

    elif choice == 3:
        name = input("Enter the name of the book: ")
        if name in lib:
            print("Author:", lib[name])
        else:
            print("Book is not found")

    elif choice == 4:
        print("Thanks")
        break

    else:
        print("Invalid Choice")