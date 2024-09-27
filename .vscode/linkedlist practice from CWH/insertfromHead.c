#include<stdio.h>
#include<stdlib.h>

// Definition of the Node structure
struct Node{
    int data;
    struct Node* next;
};

// Function to traverse the linked list and print its elements
void TraverseLinkedList(struct Node* ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Function to insert a new node at the head of the linked list
struct Node* InsertHead(struct Node* head, int data){
    // Allocate memory for the new node
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    
    // Set the data and adjust the pointers
    ptr->data = data;
    ptr->next = head;

    // Return the new head of the list
    return ptr;
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    // Allocate memory for the nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Input data for the nodes
    printf("Enter the 1st element: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("Enter the 2nd element: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter the 3rd element: ");
    scanf("%d", &third->data);
    third->next = NULL;

    // Traverse and print the linked list before inserting at head
    printf("Linked list before insertion:\n");
    TraverseLinkedList(head);

    // Insert a new element at the head
    int newData;
    printf("Enter the element to insert at the head: ");
    scanf("%d", &newData);
    
    head = InsertHead(head, newData);  // Update head after insertion

    // Traverse and print the linked list after insertion at head
    printf("Linked list after insertion at head:\n");
    TraverseLinkedList(head);

    return 0;
}
