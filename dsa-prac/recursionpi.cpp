#include<iostream>
#include<string.h>
using namespace std;
void pi(string ch,int i){
    if(ch.length()==i)
    {
        return;
    }
    if(ch[i]=='p' and ch[i+1]=='i'){
    cout<<3.14;
    i=i+2;}

    else{
    cout<<ch[i];
    i++;
    }
    pi(ch,i);
}
int main(){
    int i=0;
    string ch;
    getline(cin,ch);
    pi(ch,i);
}