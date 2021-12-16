#include<iostream>
#include<thread>
using namespace std;
void threadex(){
    cout<<"thread 1";
}
int main(){
    thread t1(threadex);
   
    
    cout<<"hello";
    t1.join();
}
