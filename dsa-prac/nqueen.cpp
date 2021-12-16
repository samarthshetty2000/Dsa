#include<iostream>
using namespace std;
bool isok(int ** a,int n,int x,int y){
    for(int row=0;row<x;row++){
    if (a[row][y]==1){
        return false;
    }
    }
    int col=y;
    int row=x;
    while(row>=0 && col>=0){
        if(a[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    col=y;
    row=x;
    while(row>=0 && col<n){
        if(a[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;

}
bool nqueen(int ** a ,int x,int n)
{
    if(x>=n){
        return true;

    }
    for(int col=0;col<n;col++){
        if(isok(a,n,x,col)){
            a[x][col]=1;
            if(nqueen(a,x+1,n)){
            return true;}
            a[x][col]=0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int ** a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int [n];
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    if(nqueen(a,0,n)){
        for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
           cout<< a[i][j]<<" ";
        }cout<<endl;

    }

    }
}