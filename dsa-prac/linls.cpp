#include<iostream>
using namespace std;
class node{
    public:int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }

};
node * head=NULL;
void insertin(int val){
   

    node* n=new node(val);
     if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){

       temp= temp->next;
    }
    temp->next=n;


}
void display()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void insertatstart(int val){
    node* n=new node(val);
  
      n->next=head;
      head=n;
}
int main(){
    
    insertin(1);
    insertin(1);
    insertin(2);
   
    
    insertatstart(3);
     display();

    
}