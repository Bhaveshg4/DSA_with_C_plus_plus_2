//making a circular linked list, insertion,deletion:
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* head,int val){
    node* n =new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;

    }
    node* todele=head;
    temp->next=head->next;
    head=head->next;
}
void deletion(node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count=pos-1){
        temp=temp->next;
        count++;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;
    }
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(temp!=head);
        cout<<endl;
    


}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAthead(head,5);
    display(head);   
    deletion(head,5);
    display(head);
    return 0;
    





    
}