#include<iostream>
#include<string>
using namespace std;
void reverse(string ch,int n,int i){
if(i==n)
return;
reverse(ch,n,i+1);
cout<<ch[i];
}

int main()
{int i=0;
 string ch;
getline(cin,ch);
 reverse(ch,ch.size(),i);
 return 0;
}