books = []

n = int(input("Enter number of books: "))

for i in range(n):
    print(f"\nBook {i+1}")
    book_id = int(input("Enter Book ID: "))
    name = input("Enter the book name: ")
    author = input("Enter the author name: ")

    books.append({
        "ID": book_id,
        "Name": name,
        "Author": author
    })

print("\nLibrary Records")
for book in books:
    print("\nBook ID:", book["ID"])
    print("Book Name:", book["Name"])
    print("Author:", book["Author"])