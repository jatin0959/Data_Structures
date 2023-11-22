// 1. find sum of elements at Kth level
//  hint:- keep track on which level you are right now
/*
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

int sumAtK(Node* root, int K){
    if (root == NULL){
        return -1;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level =0;
    int sum = 0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if (node != NULL){
            if(level==K){
                sum+=node->data;
            }
            if (node->left){
                q.push(node->left);

            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if( !q.empty()){
            q.push(NULL);
            level++;
        }

    }
    return sum;
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<sumAtK(root,2 );
    return 0;

}

*/


// 2. count all the nodes in a Binary tree


/*
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}


int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<countNodes(root)<< endl;
    return 0;

}

*/
//3. find the sum of all nodes in binary tree
/*
#include <bits/stdc++.h>;
using namespace std;
 s
 struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
 };

 int sumNodes(Node* root){
    if (root == NULL){
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->data;
 }

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<countNodes(root)<< endl;
    return 0;

}
*/


// 4. Find the height of a Binary tree


/*
#include<bits/stdc++.h>;
using namespace std;

struct Node
{
    int data ;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calcHeight(Node* root){
    if (root == NULL){
        return 0;
    }
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    return max(lheight, rheight)+1;
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<calcHeight(root)<< endl;
    return 0;

*/


//5. find the diameter of a binary tree


/*
#include<bits/stdc++.h> 
using namespace std;

5
struct Node
{
    int data ;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int calcHeight(Node* root){
    if (root == NULL){
        return 0;
    }
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    return max(lheight, rheight)+1;
}

int diameter(Node* root){
    if (root == NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(currDiameter, max(rDiameter, lDiameter));
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<diameter(root)<< endl;
    return 0;
}
*/

//6. Replace the value of each node with thee sum of all subtree nodes and itself in binary tree


/*
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data ;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumReplace(Node* root){
    if(root == NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left){
        root->data += root->left->data;
    }
    if(root->right != NULL ){
        root->data += root->right->data;
    }
}

void preorder(Node* root){
    if (root == nullptr){
        return;
    }
    cout<< root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<"before replacing node binay tree in preorder traversal: "<< endl;
    preorder(root);
    cout<<endl;
    sumReplace(root);
    cout<<"Replaced value binary tree in preorder traversal: " << endl;
    preorder(root);
    return 0;
}

*/

//7. check if a tree is balanced or not.

/*
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;
}
bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }
    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }
    int lh= height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    if(isBalanced(root)){
        cout<<"Balanced tree"<<"\n";
    }
    else{
        cout<<"Unbalanced tree";
    }
    
    return 0;
}
*/

//8. Right view of a binary tree
/*
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left = NULL;
        right = NULL;
    }
};

void rightView(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            Node* curr = q.front();
            q.pop();
            if(i == n-1){
                cout<< curr->data<< " ";
            }
            if(curr->left !=NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    rightView(root);
    return 0;
}
*/
//9. find the minimum distance between two nodes in binary tree.

/*
#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   struct Node* left;
   struct Node* right;
   Node(int val){
    data = val;
    left = NULL;
    right = NULL;
   }
};
Node* LCA(Node *root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }
    Node* left = LCA(root->left, n1,n2);
    Node* right = LCA(root->right, n1, n2);
    if(left != NULL && right != NULL){
        return root;
    }

    if(left == NULL && right == NULL){
        return NULL;
    }
    if(left!=NULL){
        return LCA(root->left, n1, n2);
    }
    if(right!=NULL){
        return LCA(root->right, n1, n2);
    }
}
int findDist(Node *root, int k, int dist){
    if(root == NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left = findDist(root->left,k,dist+1);
    if(left !=-1){
        return left;

    }
    return findDist(root->right, k, dist+1);
}
int distanceBtwNodes(Node *root, int n1, int n2){
    Node *lca = LCA(root, n1, n2);


    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);
    return d1+d2;
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(6);
    cout<<distanceBtwNodes(root,2,5)<< endl;
    return 0;
}
*/

// 10. flatten a binary tree into linked list.
/*
#include<bits/stdc++.h> 
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flatten(Node* root){
    
}



*/

// print all nodes at distance k.

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
