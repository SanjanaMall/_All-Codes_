from pathlib import Path
import os

print("Current Working Directory:", Path.cwd())

def readfielandfolder():
    path = Path('.')   # fixed here
    items = list(path.rglob('*'))
    for i, item in enumerate(items):
        print(f"{i+1}: {item}")

def createfile():
    try:
        readfielandfolder()
        name = input("Enter file name to create: ")
        p = Path(name)

        if not p.exists():
            with open(p, "w") as fs:
                data = input("Enter data to write in file: ")
                fs.write(data)

            print("FILE CREATED SUCCESSFULLY")
        else:
            print("This file already exists")

    except Exception as err:
        print(f"An error occurred: {err}")

def readfile():
    try:
        readfielandfolder()
        name = input("Which file you want to read: ")
        p = Path(name)

        if p.exists() and p.is_file():
            with open(p, 'r') as fs:
                data = fs.read()
                print("\nFile Content:\n")
                print(data)

            print("Read Successfully")
        else:
            print("The file does not exist")

    except Exception as err:
        print(f"An error occurred: {err}")

def updatefile():
    try:
        readfielandfolder()
        name = input("Tell which file you want to update: ")
        p = Path(name)

        if p.exists() and p.is_file():
            print("1. Change file name")
            print("2. Overwrite data")
            print("3. Append data")

            res = int(input("Enter your choice: "))

            if res == 1:
                name2 = input("Enter new file name: ")
                p2 = Path(name2)
                p.rename(p2)
                print("File renamed successfully")

            elif res == 2:
                with open(p, 'w') as fs:
                    data = input("Enter new data (overwrite): ")
                    fs.write(data)
                print("File overwritten successfully")

            elif res == 3:
                with open(p, 'a') as fs:
                    data = input("Enter data to append: ")
                    fs.write(data)
                print("Data appended successfully")

            else:
                print("Invalid choice")

        else:
            print("File does not exist")

    except Exception as err:
        print(f"An error occurred: {err}")

def deletefile():
    try:
        readfielandfolder()
        name = input("Which file you want to delete: ")
        p = Path(name)

        if p.exists() and p.is_file():
            p.unlink()
            print("File removed successfully")
        else:
            print("No such file exists")

    except Exception as err:
        print(f"An error occurred: {err}")

print("1. Create file")
print("2. Read file")
print("3. Update file")
print("4. Delete file")

check = int(input("Enter your choice: "))

if check == 1:
    createfile()
elif check == 2:
    readfile()
elif check == 3:
    updatefile()
elif check == 4:
    deletefile()
else:
    print("Invalid option")
