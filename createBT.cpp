#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertNode(int data, int n) {
    if (n <= 0) {
        return nullptr;
    }
    Node* newNode = new Node(data);
    newNode->left = insertNode(data + 1, n - 1);
    newNode->right = insertNode(data + 2, n - 1);
    return newNode;
}

// creating a BST from preorder.


void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node* root = insertNode(1, n);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}




