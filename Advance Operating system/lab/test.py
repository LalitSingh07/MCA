ls1 = [14]
ls2 = [14,2,4,6,8]
ls3=[]

for x in ls1:
    if x not in ls2:
        ls3.append(x)
for y in ls2:
    if y not in ls1:
        ls3.append(y)
print(ls3)