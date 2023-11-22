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


int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);

 cout << "Preorder Traversal: ";
    preorderTraversal(root);
    return 0;
}
