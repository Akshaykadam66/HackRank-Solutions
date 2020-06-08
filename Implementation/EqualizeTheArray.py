n=int(input())
l=[]
c=0
mydict={}
l=list(map(int,input().split()))
for i in range(n):
    if l[i] in mydict:
        mydict[l[i]]+=1
    else:
        mydict[l[i]]=1
dk=list(mydict.keys())
dv=list(mydict.values())
repeated_data= dk[dv.index(max(dv))]
for i in l:
    if i!=repeated_data:
        c+=1
print(c)
