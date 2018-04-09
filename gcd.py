big=int(raw_input("Enter the larger of the two numbers: "))
small=int(raw_input("Enter the smaller of the two numbers: "))

div=big
currMod=small

while(currMod!=0):
	tmp=div%currMod
	print("Current pair is (%d,%d)"%(div,currMod))
	div=currMod
	currMod=tmp

print ("GCD of %d and %d is %d" %(big,small,div))
