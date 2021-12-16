#include<iostream>


using namespace std;
int main(){
int key;
string a;
cout<<"string:";
getline(cin,a);
cout<<"key:";
cin>>key;




for(int i=0;i<a.length();i++){
    if(a[i]!=' ')
    a[i]=int(a[i])+key;
}
    cout<<a;
} 
