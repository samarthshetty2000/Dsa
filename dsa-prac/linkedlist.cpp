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
node * head;

void insert(int val){
     node* ptr=new node(val);
    if(head==NULL){
        head=ptr;
        return;
       }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=ptr;
    return;
}
void insert2(int val){
    node * ptr=new node(val);
    
    ptr->next=head;
    head=ptr;
    return;
}
void deletelast()
{
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next->next;
    }
    temp->next=NULL;
    return;

}
void deletef()
{   if(head==NUll){
    cout<<"no elements to delete";
    return;
}
    node *ptr=head;
    head=head->next;
    delete ptr;

    
}
void  deleterandom(int count)
{
    node* ptr=head;
    int i=0;
    if(count=1){
        deletef();
        return;
    }
    while(i<count-2)
   {   //cout<<ptr->data;
       ptr=ptr->next;
       i++;
   }
   ptr->next=ptr->next->next;
   return;


}

void display(){
    node* temp=head;
    while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
    }
    return;
}

int main()

{

    insert(1);
    insert(3);
    insert(2);
    insert(5);
    insert(8);
    deleterandom(2);
    display();

}