import math
num=int(raw_input("Enter in number to check if divisible by 7: "))

while(num%10!=num):
	newnum=num%10
	newnum*=2

	num/=10
	num=math.floor(num)

	num-=newnum

	if(num<0):
		num*=-1


if(num%7==0):
	print ("Number is divisible by 7")
else:
	print ("Number is not divisible by 7")
