#include<iostream>
using namespace std;
int main()
{
int n,sum;
cin>>n;
int i=0;
for (i=2;i<n;i++)
{
    if(n%i==0)
    {
        cout<<"not prime"<<endl;
        break;
    }

}
if (i==n){
cout<<"prime";}
}