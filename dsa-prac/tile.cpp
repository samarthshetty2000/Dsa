 #include<iostream>
 using namespace std;
int tile(int n)
{
    if(n==1){
        return 1;
    }
    return(tile(n-1)+tile(n-2));

}

 int main(){
     cout<<tile(4);
     return 0;
 }