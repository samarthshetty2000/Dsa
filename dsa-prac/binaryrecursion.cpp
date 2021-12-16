#include<iostream>
using namespace std;
int binarysearch(int arr[],int start,int end,int key){
    if(start==end)
    return -1;
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return binarysearch(arr,mid+1,end,key);
    }
    else {
        return binarysearch(arr,start,mid-1,key);
    }

}
int main(){
    int arr[]={1,2,3,4,5};
   int r= binarysearch(arr,0,5,3);
   cout<<r;
}