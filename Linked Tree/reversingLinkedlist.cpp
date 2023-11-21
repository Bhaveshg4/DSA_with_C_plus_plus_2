/*REversing the linked list:
In this operation, we reverse a linkedlist
suppose A is a head and the last element is D
then the reversed linked list will be
D is a head and A is the last element*/
#include<iostream>
using namespace std;
//in array single block of memory with partions are present
//in linked list multiple blocks of memory linked to each other
//limitation in array:
//fixed size,contiguous block of memory, inserting or deleting is costly
/**
 * properties of linked list
 * Size can be modifies
 * Non contiguous memory
 * insertion and deletion at any point is easier
 * a node consist of data and the address of next element
 * at last element we will store null as a address
 *          ________________
 * NODE:   |__data__|_next__|
*/
//CODE:
class node{
        public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;

};
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    };
    node* temp=head;
    while(temp->next!=NULL){
        
        temp=temp->next;
    }
    temp->next=n;
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }


};

//reversing a linked list by iterative way.
//In this we create three pointers named as previous,current amd next which iterate to
//reverse the list
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    };
    return prevptr;
};
//reversing a linked list by recursive way
node* reverseREcursive(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    };
    node* newhead = reverseREcursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;

};
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtHead(head,4);
    insertAtTail(head,3);
    display(head);
    cout<<search(head,5)<<endl;
    node* newhead = reverse(head);
    display(newhead);
    node* newhead1= reverseREcursive(head);
    display(newhead1);


}