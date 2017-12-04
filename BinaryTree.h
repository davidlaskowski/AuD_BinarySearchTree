#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED
#include "Node.h"


class BinarySearchTree
{
    public:
        BinarySearchTree();
        virtual ~BinarySearchTree();
        Node* search(Node* root, int key);
        Node* insert(Node* node, int key);
        Node* remove(Node* root, int key);
        int check(Node* node);
        int height(Node* node);
        void print (Node* root);
    protected:

    private:
        Node* minValueNode(Node* node);
};

#endif // BINARYTREE_H_INCLUDED
