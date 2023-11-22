l=[]
t=0
for i in range(5):
    a=int(input("enter the list items:"))
    l.append(a)
c=int(input("enter the elements to search:"))
for  i in range(len(l)):
    if c==l[i]:
        t=1
        break
if t==1:
    print("element found:",i+1)
else:
    print("element not found:")