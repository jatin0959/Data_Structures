// #include "bits/stdc++.h"

// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// void printLeafNodes(Node* root) {
//     if (root == NULL)
//         return;

//     if (root->left == NULL && root->right == NULL) {
//         cout << root->data << " ";
//         return;
//     }

//     if (root->left)
//         printLeafNodes(root->left);

//     if (root->right)
//         printLeafNodes(root->right);
// }

// int main() {
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(5);
//     root->right->right = new Node(6);

//     printLeafNodes(root);

//     return 0;
// }
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int adjMatrix[MAX_SIZE][MAX_SIZE]; // Global adjacency matrix
string nodeData[MAX_SIZE]; // Global array to store node data

void initializeGraph(int v) {
    // Initialize the adjacency matrix with zeros
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            adjMatrix[i][j] = 0;
        }
    }
}

void addEdge(int source, int destination) {
    // Mark the edge in the adjacency matrix
    adjMatrix[source][destination] = 1;
    adjMatrix[destination][source] = 1; // For undirected graph
}

void setNodeData(int index, string data) {
    nodeData[index] = data;
}

void printAdjacencyMatrix(int v) {
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << " : " << nodeData[i] << endl;
    }
}

int main() {
    int V;
    cout << "Enter number of vertices in the graph: ";
    cin >> V;
    int source, dest;
    string data;
    int index;

    initializeGraph(V); 

    for (int i = 0; i < V; i++) {
        cout << "Enter index and data with space: ";
        cin >> index >> data;
        setNodeData(index, data);
    }

    for (int i = 0; i < V; i++)
    {
              cout << "Enter source and destination with space: ";
        cin >> source >> dest;
        addEdge(source, dest);  
    }
    
    cout << "Adjacency Matrix:" << endl;
    printAdjacencyMatrix(V);

    return 0;
}
