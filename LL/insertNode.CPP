#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

    Node(int value){
        this->data= value;
        this->next=NULL;
    }
};
void insertNode(Node* &head ,  int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
    
}
void insertatEnd(Node* tail, int value){
    Node* temp = new Node(value);
    tail->next=temp;
    tail = tail->next;

    
}
void displayList(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
   cout<<endl; 
}
int main(){
    Node* head = NULL;
    Node* tail=head;
    insertNode(head,10);
    displayList(head);
    insertNode(head,20);
    displayList(head);
    insertNode(head,30);
    displayList(head);
    insertatEnd(head,40);
    displayList(head);
    return 0;
}