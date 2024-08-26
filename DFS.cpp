#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void preorder(Node* root) { //recurssive function!!! continue excute until meets the condition
    if (root == nullptr) return; //step 0

    cout << root->data << endl; //step 1
    preorder(root->left); //step 2
    preorder(root->right);// step 3 if there is no left in the node
}

void inorder(Node* root) {
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}

void postorder(Node* root) {
    if(root == nullptr) return;

    inorder(root->left);
    inorder(root->right);
    cout << root->data << endl;
}

int main() {
    Node* root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->left->right->left = createNode(9);

    root->right->left = createNode(6);
    root->right->right = createNode(7);

    root->right->right->left = createNode(15);


    postorder(root);
    
    return 0;
}