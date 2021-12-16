#include<iostream>
using namespace std;
class stack1{
    public:int item;
           stack1 *next;
           stack1(int item)
           {    
               this->item=item;
               next=NULL;
           }
};
stack1 *head=NULL;

void push(int item)
{
     stack1 *ptr=new stack1(item);
     stack1 *temp=head;
     head=ptr;
     head->next=temp;

}
void disp(){
 stack1 *temp=head;
 while(temp!=NULL)
 {
     cout<<temp->item;
     temp=temp->next;
 }

}
int pop(){
    if(head==NULL)
    {
        cout<<"empty";
    }
    else{
    int data=head->item;
    head=head->next;
      return data;
    }

}
int main(){
    
  for(int i=1;i<=5;i++){
      push(i);
  }
  disp();
  
  for(int i=0;i<5;i++){
      cout<<pop();
  }
}