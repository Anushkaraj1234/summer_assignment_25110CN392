arr = []

n = int(input("Enter number of elements: "))

for i in range(n):
    arr.append(int(input("Enter element: ")))

while True:
    print("\n1. Display")
    print("2.Sum")
    print("3. Maximum")
    print("4.Minimum")
    print("5. Exit")

    choice = int(input("Enter your choice: "))

    if choice ==1:
        print("Array:", arr)

    elif choice == 2:
        print("Sum =", sum(arr))

    elif choice== 3:
        print("Maximum =", max(arr))

    elif choice== 4:
        print("Minimum =", min(arr))

    elif choice== 5:
        break

    else:
        print("Invalid Choice")