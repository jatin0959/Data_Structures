// wap to find indegree and outdegree.

// wap to print a binary tree in inorder, preorder, postorder and levelorder.

#include "bits/stdc++.h"

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " "; 
    preorderTraversal(root->left);  
    preorderTraversal(root->right); 
}


void inorder(Node* root){
    if (root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);
    
}

void postorder(Node* root){
    if (root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";

}

void levelOrder(Node* root){
     if(root==NULL)
     {
        return;
     }
     queue<Node*> q;
     q.push(root);
     q.push(NULL);
     while (!q.empty())
     {
        Node* node = q.front();
        q.pop();
        if(node !=NULL){
            cout<< node->data << " ";
            if(node->left){
                q.push(node->left);
            if(node->right){
                q.push(node->right);
            }
            }
        }
        else if (!q.empty()){
            q.push(NULL);
        }
     }
     
}



int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);

 cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout<< endl;

 cout<< "Inorder Traversel: ";
    inorder(root);
    cout<< endl;
 cout<< "Postorder traversal: ";
    postorder(root);
    cout<< endl;
 cout<< "Levelorder Traversal: ";
    levelOrder(root);
    cout<< endl;
    return 0;
}
