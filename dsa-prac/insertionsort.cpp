#include<iostream>
using namespace std;
int main(){
    int a[]={9,8,7,6,5,4};
    int n=6,temp;
    for (int i=1;i<n;i++){
        temp=a[i];
        int j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    cout<<a[i];
}
