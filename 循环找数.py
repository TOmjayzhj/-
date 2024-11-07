x = []

for i in range (-168 , 169) :
    for j in range (-168 , 169) :
        m = (j - i)/2
        n = (i + j)/2
        if i * j == 168 and (n + m) * (n - m) == 168 :
                 if (m**2 - 100) % 1 == 0 :
                         x.append(m**2 - 100)

print(set(x))