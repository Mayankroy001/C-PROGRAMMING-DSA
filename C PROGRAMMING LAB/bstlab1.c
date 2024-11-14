#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}


void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}


void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}


void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}


struct Node* findMin(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}


void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root); 
    }
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    while (1) {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert a node\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a valid integer.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input! Please enter a valid integer.\n");
                    while (getchar() != '\n'); 
                    break;
                }
                root = insert(root, value);
                printf("Node inserted.\n");
                break;

            case 2:
                if (root == NULL) {
                    printf("Tree is empty!\n");
                } else {
                    printf("Inorder Traversal: ");
                    inorderTraversal(root);
                    printf("\n");
                }
                break;

            case 3:
                if (root == NULL) {
                    printf("Tree is empty!\n");
                } else {
                    printf("Preorder Traversal: ");
                    preorderTraversal(root);
                    printf("\n");
                }
                break;

            case 4:
                if (root == NULL) {
                    printf("Tree is empty!\n");
                } else {
                    printf("Postorder Traversal: ");
                    postorderTraversal(root);
                    printf("\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                freeTree(root); 
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}