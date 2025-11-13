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

// Function for Preorder Traversal (Root → Left → Right)
void preorder(struct Node* root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);    // visit root
    preorder(root->left);         // visit left subtree
    preorder(root->right);        // visit right subtree
}

int main() {
    // Create a simple static binary tree
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

    printf("Preorder Traversal of the Tree:\n");
    preorder(root);

    return 0;
}
