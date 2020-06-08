l = list(map(int,input().split()))
n,d=l[0],l[1]
c=0
# print("%d %d" % (n,d))
l = list(map(int,input().split()))
# print(l)
for i in range(0,n-2):
    for j in range(i+1,n-1):
        if l[j]-l[i]==d:
            for k in range(j+1,n):
                if l[k]-l[j]==d:
                    c+=1
                
print(c)