//Floyd's Algorithm
//Hare and tortoise Algorithm
//In this algorithm, generally when two nodes point at same node, then there is a posibility of a cycle in
//the linked list.here we use two pointers, the first one is slow pointer(turtle) and the second one is
//fast pointer, which is the rabit. 
//The logic is, when the rabit and the tortoise reach at the same node, we declare that the linked list has
//cycle  
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