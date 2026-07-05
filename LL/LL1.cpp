#include <iostream>
using namespace std;
struct  Node
{
    int data;
    Node* next;


};

// INSERT AT BEGIN

void insertStart(Node* &head , int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

//INSERT AT LAST

void insertlast(Node* &head , int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL) head=newNode;
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

// PRINT THE LIST

void printList(Node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main(){
    Node* head = NULL;
     insertStart(head, 5)  ; 
     insertStart(head, 6)  ; 
     insertStart(head, 7)  ; 


    printList(head);

    return 0;
}