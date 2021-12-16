lis=list(map(int,input("enter the number").split()))
start=0
end=len(lis)
key=int(input("enter the key"))
while(start!=end):
    mid=int((start+end)/2)
    if(key==lis[mid]):
        print(mid)
        break
    elif(key>lis[mid]):
        star=mid+1
    else:
        end=mid-1