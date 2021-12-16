#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
    if(s.length()==0){
        return;

    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
    }
int main()
{
    int i=0;
    string ch;
    getline(cin,ch);
    reverse(ch);
    return 0;

}