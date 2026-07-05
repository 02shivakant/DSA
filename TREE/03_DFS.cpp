#include <iostream>
#include <stack>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left =  right = NULL;
    }
};

void IterativeOrder(Node* root){
    if(root==NULL) return;
    stack<Node*>st;
    st.push(root);

    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        cout<<temp->data<<" ";
        
         if(temp->right){
            st.push(temp->right);
        }

        if(temp->left){
            st.push(temp->left);
        }
       
    }

}
int  main(){
      Node* root = new Node(1);

    root->right = new Node(3);
    root->left = new Node(2);
    
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    

    root->right->right = new Node(6);

    IterativeOrder(root);
    return 0;
}