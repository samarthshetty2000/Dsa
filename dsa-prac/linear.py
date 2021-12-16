lis=list(map(int,input("enter the elements").split()))
key=int(input("enter the key"))
for i,j in enumerate(lis):
    if(j==key):
        print(i)

