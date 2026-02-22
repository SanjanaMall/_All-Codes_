import json 
import random
import string
from pathlib import Path

class Bank:
  database = 'data.json'
  data = []

  try:
    if Path(database).exists():
      with open(database,'r') as fs:
        data = json.load(fs)
    else:
      data = []

  except Exception as err:
    print(f"an exception occured as {err}")


  @staticmethod
  def update():
    with open(Bank.database, 'w') as fs:
      json.dump(Bank.data, fs, indent=4)

  @classmethod
  def __accountgenerate(cls):
    alpha = random.choices(string.ascii_letters, k=3)
    num = random.choices(string.digits, k = 3)
    spachar = random.choices("!@#$%^&*", k=1)
    id = alpha + num + spachar
    random.shuffle(id)
    return"".join(id)

  def createaccount(self):
    info = {
      "name" : input("enter your name:"),
      "age"  : int(input("enter your age:")),
      "email" : input("enter your email:"),
      "pin" : int(input("tell your pin: ")),
      "accountnumber" :   Bank.__accountgenerate(),
      "balance" : 0 
    }

    if info['age']<18 or len(str(info['pin']))!=4:
      print("you are not eligible to open account")
      return
      
    Bank.data.append(info)
    Bank.update()

    print("Account created successfully!")
    print(f"your account number is {info['accountnumber']}")

  def depositmoney(self):
    accountnumber = input("enter your account number:")
    pin = int(input("enter your pin:"))

    userdata = [i for i in Bank.data if i['accountnumber'] == accountnumber and i['pin'] == pin]
    if not userdata:
      print("Sorry! no data found")
      return
    
    amount = int(input("how much you want to deposit : "))

    if amount > 100000 or amount < 0:
        print("Sorry! the amount is too much you can deposit below 100000 and above 0")
        return
  
    userdata[0]['balance'] += amount
    Bank.update()
    print("Amount deposited successfully")

  def withdrawmoney(self):
      accountnumber = input("enter your account number:")
      pin = int(input("enter your pin:"))

      userdata = [i for i in Bank.data if i['accountnumber'] == accountnumber and i['pin'] == pin]


      if not userdata:
        print("Sorry! no data found")
        return
      
      amount = int(input("how much you want to withdraw : "))

      if amount > userdata[0]['balance']:
          print("Insuffucient balance")
          return
        
      
      userdata[0]['balance'] -= amount
      Bank.update()
      print("Amount withdrawn successfully")

  def showdetails(self):
      accountnumber = input("enter your account number:")
      pin = int(input("enter your pin:"))

      userdata = [i for i in Bank.data if i['accountnumber'] == accountnumber and i['pin'] == pin]
      print("your information are \n\n\n")
      if not userdata:
        print("No such user found")
        return
      for i in userdata[0]:
        print(f"{i} : {userdata[0][i]}")

      Bank.update()
      print("details updated successfully")


  def updatedetails(self):
    accountnumber = input("enter your account number:")
    pin = int(input("enter your pin:"))

    userdata = [i for i in Bank.data if i['accountnumber'] == accountnumber and i['pin'] == pin]

    if not userdata:
      print("No such user found")

    else:
      print("you cannot change the age, accountnumber, balance")
      print("Fill the details for the change or leave it empty for no change")

      newdata = {
        "name" : input("please tell new name or press enter :"),
        "email" : input("please tell your new email or press enter : "),
        "pin" : input("enter new pin or press neter to skip :")
      }

      if newdata["name"] == "":
        newdata["name"] = userdata[0]["name"]
      if newdata["email"] == "":
        newdata["email"] = userdata[0]["email"]
      if newdata["pin"] == "":
        newdata["pin"] = userdata[0]["pin"]
      

      newdata["age"] = userdata[0]["age"]
      newdata["accountnumber"] = userdata[0]["accountnumber"]
      newdata["balance"] = userdata[0]["balance"]

      if type(newdata["pin"]) == str:
        newdata["pin"] = int(newdata["pin"])

      for i in newdata:
        if newdata[i] == userdata[0][i]:
          continue
        else:
          userdata[0][i] = newdata[i]

      Bank.update()
      print("Details updated successfully")

  def delete(self):
    accountnumber = input("enter your account number:")
    pin = int(input("enter your pin:"))

    userdata = [i for i in Bank.data if i['accountnumber'] == accountnumber and i['pin'] == pin]

    if not userdata:
      print("No such user found")

    else:
      check = input("press y if u actually wnat to delete the account or press n")
      if check == 'n' or check == 'N':
        print("bypassed")
      else:
        index = Bank.data.index(userdata[0])
        Bank.data.pop(index)
        print("account deleted successfully")
        Bank.update()
user = Bank()

print("press 1 for opening account")
print("press 2 for depositing money in bank")
print("press 3 for withdrawing money from bank")
print("press 4 for checking details of account")
print("press 5 for updating details of account")
print("print 6 for deleting account")

choice = int(input("enter your choice:"))
if(choice == 1):
  user.createaccount()

if(choice == 2):
  user.depositmoney()
  
if(choice == 3):
  user.withdrawmoney()

if(choice == 4):
  user.showdetails()

if(choice == 5):
  user.updatedetails()

if(choice == 6):
  user.delete()
  