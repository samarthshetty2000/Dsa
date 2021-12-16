#include<iostream>
using namespace std;
void swap(int a[],int i,int j)
{
    int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

}
 int partition(int arr[],int beg,int end)

 {
    int pivot=arr[end];
    int i=beg-1;
    for(int j=beg;j<end;j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    
 return i+1;
 }

 void quick(int arr[],int beg,int end){
     if(beg<end){
    int piv=partition(arr,beg,end);
     quick(arr,beg,piv-1);
     quick(arr,piv+1,end);
     }

 }
 int  main(){
     int arr[]={6,3,9,5,2,8,7};
     quick(arr,0,6);
     for(int i=0;i<7;i++){
         cout<<arr[i];
     }
 }