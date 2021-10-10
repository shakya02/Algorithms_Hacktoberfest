from math import sqrt

a=int(input("Enter coefficient of x²: "))

b=int(input("Enter coefficient of x: "))

c=int(input("Enter constant value: "))

D=(b*b-4*a*c)

if D>0:

 x1=(-b+sqrt(D))/(2*a)

 x2=(-b-sqrt(D))/(2*a)

 print("x1 = "+str(round(x1,6)))

 print("x2 = "+str(round(x2,6)))

elif D==0:

 x1=-b/(2*a)

 x2=-b/(2*a)

 print("x1 = "+str(round(x1,6)))

 print("x2 = "+str(round(x2,6)))

else:

 x1=(-b+sqrt(abs(D)))/(2*a)

 x2=(-b-sqrt(abs(D)))/(2*a)

 print("x1 = "+str(round(x1,6))+"i")

 print("x2 = "+str(round(x2,6))+"i")


 
# This program has a time complexity of O (√n) due to sqrt() function.
