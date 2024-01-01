#include<iostream>
//type of linked list:
//commom structure of linked list:  Node => |Previous|Data|Next
//we can move towards both directions: forward and backwards


//Adding a node
//we have to add a node at the last of the doubly linked list:
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next=NULL;
        prev=NULL;
    }

};
void InsertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    if (head!=NULL){
        head->prev=n;
    }; 
    head=n;
}
void InsertAtTail(node* &head, int val){
    if (head==NULL)
    {
        InsertAtHead(head,val);
        return;
    }
    
    node* n = new node(val);
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
        
    }
    temp->next=n;
    n->prev=temp;

};
void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        std::cout<<temp->data<<"";
        temp=temp->next;
    }
    std::cout<<std::endl;
    

}
void deleteAthead(node* head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;

};
void deletion(node* &head, int pos){
    //deleting a element from the doubly linked
    //suppose we have to delete the nth element
    //for this process we will link the previous of n+1's to n-1 and the next of n-1's to n+1
    node* temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        if (pos=1)
        {
            deleteAthead(head);
                

            
        }
        
        temp=temp->next;
        count++;

    }
    temp->prev->next=temp->next;
    //edge condition when we have to delete the last node
    if (temp->next!=NULL)
    {
            temp->next->prev=temp->prev;

    };
    
    delete temp;

};

int main(){
    node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    display(head);
    InsertAtHead(head,5);
    display(head);



    return 0;
}
