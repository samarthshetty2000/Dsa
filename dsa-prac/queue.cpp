#include<iostream>
using namespace std;
class queue1{
    public: int data;
            queue1 *next;
            queue1(int item){
                data=item;
                next=NULL;
            }
};
queue1 *head=NULL;
void enqueue(int item){
    queue1 *ptr=new queue1(item);
    if(head==NULL)
    {
        head=ptr;
    }
    else{
        ptr->next=head;
        head=ptr;
    }

}

int dequeue(){
    queue1 *temp=head;

    if(head==NULL){
        cout<<"empty";
    
    }
    else if(head->next==NULL){
         int c=head->data;
         head=NULL;
         return c;
    }
    else{
       while(temp->next->next!=NULL){
          
           temp=temp->next;
       }
      int c= temp->next->data;
       temp->next=NULL;
       return c;
        
    }
    
}
void display(){
    queue1 *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }

}
int main(){

   for(int i=0;i<7;i++)
   {
       enqueue(i);
   }
   display();
   for(int i=0;i<7;i++){
   cout<<dequeue();
   }
}