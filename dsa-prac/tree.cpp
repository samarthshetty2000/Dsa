#include<iostream>
using namespace std;
class tree1{
    public:int data;
            tree1 *leftnode;
            tree1 *rightnode;
            tree1(int item){
                data=item;
                leftnode=NULL;
                rightnode=NULL;
            }
            ~tree1(){} 
};
tree1 *root=NULL;

void insert(int item)
{
    tree1 *node=new tree1(item);
    tree1 *temp=root;
    if(root==NULL)
    {   //cout<<item;
        root=node;
        return;
    }
    else {
        while(1){
            
            if(item<temp->data){
                
                if(temp->leftnode==NULL)
                {   //cout<<item;
                    temp->leftnode=node;
                    temp=temp->leftnode;
                    return;
                }
                temp=temp->leftnode;
            }
            else{
                
                temp->rightnode;
                if(temp->rightnode==NULL){
                   // cout<<item;

                   
                    temp->rightnode=node;
                    temp=temp->rightnode;
                    return;
                }
                 temp=temp->rightnode;
            }


        }

        
     }
}
void display(tree1 *temp){
    if(temp==NULL){
        return;
    }
   
    display(temp->leftnode);
   
    
    display(temp->rightnode);
     cout<<temp->data<<" ";
    


}

int main(){
    insert(27);
    insert(-1);
    insert(1);
    insert(-2);
    insert(2);
    insert(-3);
    insert(3);

    tree1 *temp=root;
    display(temp);
    cout<<"completed";
}