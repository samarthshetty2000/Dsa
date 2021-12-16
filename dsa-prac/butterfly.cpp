#include<iostream>
using namespace std;
int main()
{
    int k;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if(j<=i)
            {
                cout<<"*"<<" ";
                k=j;

            }
            else if(j<=8-i)
            cout<<"  ";
            else
            {
                cout<<"*"<<" ";
            }
            
        }
        cout<<endl;
    }
}
