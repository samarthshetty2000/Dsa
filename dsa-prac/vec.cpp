#include<iostream>
 #include <algorithm>
#include<vector>
using namespace std;

bool mycompare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}
int main()
{
    int a[]={1,2,3,4,5};
    vector<int> p;
    p.push_back(1);
    p.push_back(2);
    sort(p.begin(),p.end());
    vector<pair<int,int>> v;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
      
        v.push_back(make_pair(a[i],i));

    }
    sort(v.begin(),v.end(),mycompare) ;
    for(int i=0;i<v.size();i++)
    {
        a[v[i].second]=i;
    }
   
    for(int i=0;i<v.size();i++)
    {
        cout<<a[i];
    }

}