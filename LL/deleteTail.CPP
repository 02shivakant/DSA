#include <iostream>
using namespace std;
struct Node {
        int data;
        Node *next;
    };
void insertNode(Node* &head , int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head==NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next= newNode;

};
Node* deleteHead(Node* &head){
    if(head == NULL || head->next==NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
            temp = temp->next;
    }
    free(temp->next);
    temp->next= NULL;
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
    insertNode(head, 9);
    displayList(head);
    deleteHead(head);
    displayList(head);
    

    return 0;
}
