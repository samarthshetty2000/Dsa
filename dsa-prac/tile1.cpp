#include<iostream>
 using namespace std;
int tile(int n)
{
    if(n==1 ||n ==0){
        return n;
    }
    return(tile(n-1)+tile(n-2));

}

 int main(){
     cout<< "abcv  "<<tile(4);
     return 0;
 }