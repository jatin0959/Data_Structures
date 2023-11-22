// create a BST and print in sorted order or in inorder.


/*
#include<bits/stdc++.h>
using namespace std;

struct  Node
{
	int data;
	struct Node* left;
	struct Node* right;
	Node (int val) {
		data = val;
		left=NULL;
		right = NULL;
	}

};

Node* insertBST(Node* root, int val){
	if (root == NULL){
		return new Node(val);
	}
	if (val < root ->data){
		root->left = insertBST(root->left,val);
	}
	else{
		root->right = insertBST(root->right, val);
}
return root;
}

void inorder(Node* root){
	if(root == NULL){
		return;
	}

inorder(root->left);
cout<< root->data << " ";
inorder(root->right);

}
int main(){
	Node *root =NULL;
	root = insertBST(root, 5);
	insertBST(root,1);
	insertBST(root, 3);
	insertBST(root,2);
	insertBST(root,7);

	//print inorder
	inorder(root);
	return 0;
}
*/

// wap to search in binary tree.
// time complexity O(logn)
/*
#include<bits/stdc++.h>
using namespace std;
struct  Node
{
	int data;
	struct Node* left;
	struct Node* right;
	Node (int val) {
		data = val;
		left=NULL;
		right = NULL;
	}

};
Node* insertBST(Node* root, int val){
	if (root == NULL){
		return new Node(val);
	}
	if (val < root ->data){
		root->left = insertBST(root->left,val);
	}
	else{
		root->right = insertBST(root->right, val);
}
return root;
}

void inorder(Node* root){
	if(root == NULL){
		return;
	}

inorder(root->left);
cout<< root->data << " ";
inorder(root->right);

}


Node* searchInBST(Node* root, int key){
	if (root == NULL){
		return NULL;
	}
	if(root->data == key){
		return root;
	}
	if(root->data>key){
		return searchInBST(root->left, key);
	}
	
	return searchInBST(root->right, key);
	


}

int main(){
	Node *root =NULL;
	root = insertBST(root, 5);
	insertBST(root,1);
	insertBST(root, 3);
	insertBST(root,2);
	insertBST(root,7);
	cout<< "entered BST in inorder: "<< endl;
	inorder(root);
	cout << endl;
	int key;
	cout<< "enter key to search: ";
	cin>> key;
	if(searchInBST(root,key)){
		cout<<"found in BST"<< endl;
	}
	else{
		cout<<"Not found in BST"<< endl;
	}

return 0;
}
*/

// DELETE A NODE IN BST

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

Node* insertBST(Node* root, int val){
	if (root == NULL){
		return new Node(val);
	}
	if (val < root ->data){
		root->left = insertBST(root->left,val);
	}
	else{
		root->right = insertBST(root->right, val);
}
return root;
}

void inorder(Node* root){
	if(root == NULL){
		return;
	}

inorder(root->left);
cout<< root->data << " ";
inorder(root->right);

}

Node* inorderSucc( Node* root){
	Node* curr = root;
	while(curr && curr->left != NULL){
		curr = curr->left;
	}
	return curr;
}
Node* searchInBST(Node* root, int key){
	if (root == NULL){
		return NULL;
	}
	if(root->data == key){
		return root;
	}
	if(root->data>key){
		return searchInBST(root->left, key);
	}
	
	return searchInBST(root->right, key);
}

Node* deleteInBST(Node* root, int key){
	if(key < root->data){
		root->left = deleteInBST(root->left, key);
	}
	else if(key > root->data){
		root->right = deleteInBST(root->right, key);
	}
	else{
		if(root->left == NULL){
			Node* temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
			Node* temp = root->left;
			free(root);
			return temp;
		}
		Node* temp = inorderSucc(root->right);
		root->data = temp->data;
		root->right = deleteInBST(root->right, temp->data);
	}
	return root;

}

int main(){
	Node *root =NULL;
	root = insertBST(root, 5);
	insertBST(root,1);
	insertBST(root, 3);
	insertBST(root,2);
	insertBST(root,7);
	cout<< "entered BST in inorder: "<< endl;
	inorder(root);
	cout << endl;
	int key;
	cout<< "enter key to search: ";
	cin>> key;
	if(searchInBST(root,key)){
		cout<<"found in BST"<< endl;
		deleteInBST(root,key);
		cout<<"After deletion the BST is: "<< endl;
		inorder(root);

	}
	else{
		cout<<"No node exit with given value in BST"<< endl<< "can not delete";
	}

return 0;
}