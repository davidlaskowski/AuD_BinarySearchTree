#include "BinaryTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree()
{
    //ctor
}

BinarySearchTree::~BinarySearchTree()
{
    //dtor
}

Node* BinarySearchTree::search(Node* root, int key){
    if (root == NULL || root->key == key)
        return root;
    // Wenn key größer als root->key ab dem rechten Kind
    if (root->key < key)
        return search(root->right, key);
    // Ansonsten suche ab dem linken Kind
    return search(root->left, key);
}

Node* BinarySearchTree::insert(Node* node, int key){
    Node* temp = new Node(key);
    if (node == NULL) return temp;

    if(key < node->key)
        node->left = insert(node->left, key);
    else if(key > node->key)
        node->right = insert(node->right, key);

    return node;
}

Node* BinarySearchTree::minValueNode(Node* node){
    Node* current = node;

    while(current->left != NULL)
        current = current->left;

    return current;
}


Node* BinarySearchTree::remove(Node* root, int key){
    if(root == NULL) return root;

    // Wenn key kleiner als root->key suche ab dem linken kind
    if(key < root->key)
        root->left = remove(root->left, key);

    // Wenn key größer als root->key suche ab dem rechten kind
    else if(key > root->key)
        root->left = remove(root->right, key);

    // Wenn key == root->key
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            delete(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            delete(root);
            return temp;
        }

        Node* temp = minValueNode(root->right);

        root->key = temp->key;

        root->right = remove(root->right, temp->key);
    }
    return root;
}

void BinarySearchTree::print(Node* root){
    if(root != NULL){
        print(root->left);
        std::cout << root->toString() << std::endl;
        print(root->right);
    }
}
/*int BinarySearchTree::height(Node* root){

     int l = root->left ? root->height(Node* root) : 0;  // height of left child, if any
    int r = root->right ? root->height(Node* root) : 0; // idem for right child
    return 1 + max(l, r);

}
*/
int BinarySearchTree::height(Node* root) {
    if (root == NULL) {
        return -1;
    }

    int lefth = height(root->left);
    int righth = height(root->right);

    if (lefth > righth) {
        return lefth + 1;
    } else {
        return righth + 1;
    }
}


    int BinarySearchTree::isBST(Node* root)
{
  return(isBSTUtil(node, INT_MIN, INT_MAX));
}
int BinarySearchTree::check(Node* root){

 //Returns true if a binary tree is a binary search tree
int isBST (Node* root)
{
  if (root == NULL){
    return 1;
  }

  // false if the max of the left is > than us
  if (root->left!=NULL && maxValue(root->left) > root->data){
    return 0;
  }
     // false if the min of the right is <= than us
  if (node->right!=NULL && minValue(root->right) < root->data){
    return 0;
  }
  // false if, recursively, the left or right is not a BST
  if (!isBST(root->left) || !isBST(root->right)){
    return 0;
  }
  return 1;
}
}
