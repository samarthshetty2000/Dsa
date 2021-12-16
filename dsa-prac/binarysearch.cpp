#include<iostream>
using namespace std;
int main(){
    int n,start,mid,key,end,arr[20];
    cout<<"enter the size\n";
    cin>>n;
    start=0;
    end=n;
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the key";
    cin>>key;
    while(start!=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid+1;
            break;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
    }

}