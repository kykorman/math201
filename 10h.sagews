import time
start=time.time()
n=8675309
if(mod(factorial(n-1),n)==n-1):
    "Prime"
else:
    "Not Prime"
end=time.time()
end-start
start=time.time()
sqrtN=floor(sqrt(n))
flag=0
for i in range(2,sqrtN+1):
    if(n%i==0):
        flag=1
if(flag):
    "Not Prime"
else:
    "Prime"
end=time.time()
end-start
