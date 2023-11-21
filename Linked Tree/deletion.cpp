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
void deleteatHead(node* &head){
    if(head==NULL){
         return;
    };
    if(head->next==NULL){
        deleteatHead(head);
        return;

    };
    node* todelete =head;
    head=head->next;
};
void deletedata(node* &head, int val){
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node*deletedata= temp->next;
    temp -> next=temp->next->next;
    delete deletedata;

}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtHead(head,4);
    insertAtTail(head,3);
    display(head);
    cout<<search(head,5)<<endl;
    deletedata(head,3);
    deleteatHead(head);
    display(head);


}