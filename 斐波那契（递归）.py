rabbits = [1,1]
n = int(input())
for i in range (2,n) :
    rabbits.append (rabbits[i-1] + rabbits[i-2])

print(rabbits[n-1])