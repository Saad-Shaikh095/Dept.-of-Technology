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

// Function for Postorder Traversal (Left → Right → Root)
void postorder(struct Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);     // visit left subtree
    postorder(root->right);    // visit right subtree
    printf("%d ", root->data); // visit root
}

int main() {
    // Create a simple binary tree
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

    printf("Postorder Traversal of the Tree:\n");
    postorder(root);

    return 0;
}
