#include<iostream>
using namespace std;
int main(){
int n,a[10];
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
int key;
cin>>key;
for(int i=0;i<n;i++){
    if(key==a[i]){
        cout<<i+1;
        break;
    }
}
}
