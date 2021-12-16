 #include<iostream>
 using namespace std;  
 void towerofhonai(int n,char source,char destination,char helper){
     if(n==0){
         return;
            } 
    towerofhonai( n-1,source, helper, destination);
    cout<<"move from "<<source<<" to "<<destination<<n;
    towerofhonai( n-1, helper, destination,source);
 }
 int main()
{
     int n=3;
     towerofhonai(n,'A','B','C');
      
}