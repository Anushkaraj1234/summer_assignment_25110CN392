balance = 1000

while True:
    print("\n1. Deposit")
    print("2. Withdraw")
    print("3. Check Balance")
    print("4. Exit")

    choice = int(input("Enter your choice:"))

    if choice == 1:
        amount = float(input("Enter amount to deposit: "))
        balance += amount
        print("Deposit Successful.")

    elif choice == 2:
        amount = float(input("Enter amount to withdraw: "))
        if amount <= balance:
            balance -= amount
            print("Withdrawal Successful.")
        else:
            print("Insufficient Balance.")

    elif choice == 3:
        print("Current Balance =",balance)

    elif choice == 4:
        print("Thank You!")
        break

    else:
        print("Invalid Choice")