n = int(input())
l = []
flag =0
data = input()
data = data.split()
for i in range(0,len(data)):
    data[i] = int(data[i])
for i in range(0,len(data)):
    for j in range(i+1,len(data)):
        if data[i] == data[j]:
            l.append(abs(data.index(data[i])-data.index(data[j],i+1)))
            flag = 1
if flag==0:
    print("-1")
else:
    print(min(l))
