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
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);


}