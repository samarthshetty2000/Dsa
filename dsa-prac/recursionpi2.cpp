#include<iostream>
#include<string.h>
using namespace std;
void pi(string ch){
    if(ch.length()==0)
    {
        return;
    }
    if(ch[0]=='p' and ch[1]=='i'){
    cout<<3.14;
    pi(ch.substr(2));
    }

    else{
    cout<<ch[0];
  pi(ch.substr(1));
    }
    
}
int main(){
    int i=0;
    
    string ch;
    getline(cin,ch);
    pi(ch);
    cout<<'h';
}