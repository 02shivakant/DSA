#include <iostream>
using namespace std;
struct Node {
        int data;
        Node *next;
    };
void insertNode(Node* &head , int value){
        Node* newnode = new Node();
        newnode->data = value;
        newnode->next = NULL;

        if(head==NULL) {
            head = newnode;
            return;
        } 

        Node* temp = head;

        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
};
Node* deleteHead(Node* &head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
};
void displayList(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
   cout<<endl; 
};
int main(){
    Node* head  =  NULL;
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 7);
    displayList(head);
    deleteHead(head);
    displayList(head);
    deleteHead(head);
    displayList(head);
    return 0;
}
