#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct  Node{
    int data ;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
void inorderIterative(Node* root){
    if(root==NULL) return ;  //BASE CASE
    stack<Node*>st;   
    vector<int>inorder;
    Node* node = root;

    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;

        }
        else{
            if(st.empty()) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            cout<<node->data<<" ";
            node = node->right;

        }

    }
    // for(int i =0; i<inorder.size();i++){
    //     cout<<inorder[i]<<"->";
    // }

}
int main(){
    Node* root = new Node(1);

    
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    inorderIterative(root);

    return 0;
}