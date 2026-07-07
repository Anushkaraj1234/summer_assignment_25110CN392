inventory = {}

while True:
    print("\n1.Add Product")
    print("2. View Products")
    print("3. Search Product")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        name = input("Enter the name of the product: ")
        quantity = int(input("Enter Quantity: "))
        inventory[name] = quantity
        print("Product has added successfully!")

    elif choice == 2:
        print("\nInventory:")
        for product, qty in inventory.items():
            print(product, ":", qty)

    elif choice == 3:
        name = input("Enter the name of the product ")
        if name in inventory:
            print(name, "Quantity:", inventory[name])
        else:
            print("Product not found")

    elif choice == 4:
        print("Thanks")
        break

    else:
        print("Invalid Choice")