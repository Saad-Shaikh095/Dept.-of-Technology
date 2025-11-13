#include <stdio.h>
#include <stdlib.h>

// Structure for a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function for Inorder Traversal (Left → Root → Right)
void inorder(struct Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);          // visit left subtree
    printf("%d ", root->data);    // print root
    inorder(root->right);         // visit right subtree
}

int main() {
    // Creating a simple static binary tree
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    /*
          1
         / \
        2   3
       / \
      4   5
    */

    printf("Inorder Traversal of the Tree:\n");
    inorder(root);

    return 0;
}
