contacts=[]

n = int(input("Enter number of contacts: "))

for i in range(n):
    print(f"\nContact {i+1}")
    name = input("Enter Name: ")
    phone = input("Enter Phone Number: ")

    contacts.append({
        "Name": name,
        "Phone": phone
    })

print("\nSaved Contacts")
for contact in contacts:
    print("Name:",contact["Name"])
    print("Phone:", contact["Phone"])