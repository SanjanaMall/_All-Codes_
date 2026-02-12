"""print("Welcome to the world of programming with python")
a='S'
print(ord(a))

num = int(input("enter a number:"))
age = int(input("enter your age: "))
print(num)
print(age) 

num1 = int(input("enter first number:"))
num2 = int(input("enter second number:"))
sum = num1+num2
print("the sum is:",sum)
diff = num1 - num2
print("the difference is:",diff)
prod = num1*num2
print("the product is:",prod)
div = num1/num2
print("the division is:",div)
mod = num1 % num2
print("the modulus is:",mod)
a=20
a += a
print(a)
a = int(input("enter a number:"))
if(a>0):
    print("the number is positive")
elif(a<0):
    print("the number is negative")
else:
    print("the number is zero")


x = int(input("enter first number : "))
y = int(input("enter second number : "))
if(x>y):
  print("first number is greater than second")
else:
  print("second number is greater than first")

gender =input("enter your gender (M/F/others): ")
if(gender == 'M'):
  print("good afternoon Mr.")
elif(gender == 'F'):
  print("good afternoon Ms.")
else:
  print("good afternoon")

x = int(input("enter first number : "))
if(x%2 ==0):
  print("number is even")
else:
  print("number is odd")

name = input("enter your name: ")
age = int(input("enter your age: "))
if(age >= 18):
  print("hello",name,", you are eligible to vote")
else:
  print(name,"you are not eligible to vote") 

year = int(input("enter a year :"))
if(year % 4==0 and year % 100 !=0) or (year %400==0):
  print(year,"is a leap year")
else:
  print("enter the year is not a leap year")
table = int(input("enter the number: "))
for i in range(1,11,1):
  print(table,"*",i,"=",table*i)

num = int(input("ener the number: "))
factor = 0
for i in range(1, num+1):
    if(num % i == 0):
        factor = factor + i
if(factor == num):
  print(f"{num} is a perfect number")
else:
  print(f"{num} is not a perfect number")

name = input("enter your name: ")
for char in name:
  print(char[::-1])

list = [4, 6 ,23 ,52, 62, 93, 23, 58, 62, 63]
print("even elements in the list are: ")
for i in list:
  if(i%2==0):
    print(i,)
print("odd elements in the list are: ")
  if(i%2!=0):
    print(i)

list = [4, 6 ,-23 ,-52, 62, -93, 23, -58, 62, 63]
print("positive elements in the list are: ")
for i in list:
  if(i>0):
    print(i,"is positive")
print("negative elements in the list are: ")
for i in list:
  if(i<0):
    print(i,"is negative")

list = [4, 6 ,23 ,52, 62, 93, 23, 58, 62, 63]
mean = 0
for i in list:
  mean = mean + i
mean = mean/len(list)
print("Mean of the list elements is : ", mean)

list = [4, 6 ,23 ,52, 62, 93, 23, 58, 62, 63]
greatest = list[0]
index = 0
for i in range(0,len(list),1):
  if(list[i]>greatest):
    greatest = list[i]
    index = i
print(f"the greatest elements is : {greatest} at index {index}")

list = [4, 6 ,23 ,52, 62, 93, 23, 58, 62, 63]
greatest = list[0]
sec_largest = list[0]
for i in range(0,len(list),1):
  if(list[i]>greatest):
    sec_largest = greatest
    greatest = list[i]
  elif list[i] > sec_largest:
    sec_largest = list[i]
print(f"the greatest elements is : {greatest} and second largest is {sec_largest}")

list = [4, 6 ,23 ,52, 62, 93, 23, 58, 62, 63]
for i in range(0,len(list)-1,1):
  if(list[i]<list[i+1]):
    continue
  else:
    print("list is not sorted")
    break
else:
  print("the list is sorted")"""



