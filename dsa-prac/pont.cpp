#include<iostream>
using namespace std;
void as(int *&a )
{
cout<<a<<endl;
//cout<<++*a<<endl;
}
void ab(int *b )
{
cout<<b;
++*b;
}

int main()
{
    int c=10;
    int*a=&c;
    int*& b=a;
    as(b);
    int * d=a;
    ab(d);
    //coout<<c;
    cout<<c;
}