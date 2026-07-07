seats = 50

while True:
    print("1.Book Ticket")
    print("2.Cancel Ticket")
    print("3.Available Seats")
    print("4.Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        tickets = int(input("Enter number of tickets: "))
        if tickets <= seats:
            seats -= tickets
            print("Booking Successful.")
        else:
            print("Not enough seats  are available.")

    elif choice == 2:
        tickets = int(input("Enter tickets to cancel: "))
        seats += tickets
        print("Cancellation Successful.")

    elif choice == 3:
        print("Available Seats:", seats)

    elif choice == 4:
        print("Thank You!")
        break

    else:
        print("Invalid Choice.")