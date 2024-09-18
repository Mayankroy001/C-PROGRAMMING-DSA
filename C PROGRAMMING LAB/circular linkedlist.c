#include <stdio.h>
#include <stdlib.h>

// Definition of the circular linked list node
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node and return its pointer
struct Node* getNode(int item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = item;
    newNode->next = NULL;
    return newNode;
}

// Algorithm: Create
struct Node* create(struct Node* head, int n) {
    if (head != NULL) {
        printf("List already exists\n");
        return head;
    }
    struct Node *newNode, *temp;
    int item;

    for (int i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &item);

        newNode = getNode(item);
        if (head == NULL) {
            head = temp = newNode;
            newNode->next = head;
        } else {
            temp->next = newNode;
            newNode->next = head;
            temp = newNode;
        }
    }
    return head;
}

// Algorithm: Traverse
void traverse(struct Node* head) {
    if (head == NULL) {
        printf("Empty List\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Algorithm: Insert at Beginning
struct Node* insert_begin(struct Node* head, int item) {
    struct Node* newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return head;
    }

    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
    return head;
}

// Algorithm: Insert at End
struct Node* insert_end(struct Node* head, int item) {
    struct Node* newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return head;
    }

    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

// Algorithm: Delete from Beginning
struct Node* delete_begin(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }

    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    struct Node* toDelete = head;
    if (head->next == head) {
        head = NULL;
    } else {
        temp->next = head->next;
        head = head->next;
    }
    free(toDelete);
    return head;
}

// Algorithm: Delete from End
struct Node* delete_end(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }

    struct Node* ptr = head;
    struct Node* preptr = NULL;
    while (ptr->next != head) {
        preptr = ptr;
        ptr = ptr->next;
    }
    if (ptr == head) { // Only one node
        head = NULL;
    } else {
        preptr->next = head;
    }
    free(ptr);
    return head;
}

int main() {
    struct Node* head = NULL;
    int choice, item, n;

    while (1) {
        printf("\n1. Create Circular Linked List\n2. Traverse\n3. Insert at Beginning\n4. Insert at End\n5. Delete from Beginning\n6. Delete from End\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of elements to insert: ");
                scanf("%d", &n);
                head = create(head, n);
                break;
            case 2:
                traverse(head);
                break;
            case 3:
                printf("Enter the element to insert at the beginning: ");
                scanf("%d", &item);
                head = insert_begin(head, item);
                break;
            case 4:
                printf("Enter the element to insert at the end: ");
                scanf("%d", &item);
                head = insert_end(head, item);
                break;
            case 5:
                head = delete_begin(head);
                break;
            case 6:
                head = delete_end(head);
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
