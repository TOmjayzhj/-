import math
def isprime(n):
    for i in range(2,int(math.sqrt(n))+1):
        if n%i ==0 :
            return False
            ##break
    return True

count = 0
for i in range (101,201):
    if isprime(i):
        count+=1
        print(i)
       ## if count%5==0 :
         ##   print()

print("The count is %d" % count)