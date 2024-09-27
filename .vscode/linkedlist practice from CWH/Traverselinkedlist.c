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
        printf("Element = %d\n", ptr->data); // Added a newline for better readability
        ptr = ptr->next;
    }
}

int main(){
    // Allocating memory for the nodes in the linked list
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assigning data and linking the nodes
    printf("Enter the 1st element : ");
    scanf("%d", &head->data);
    head->next = second;

  printf("Enter the 2nd element : ");
    scanf("%d", &second->data); // Corrected data assignment
    second->next = third; // Corrected pointer assignment

    printf("Enter the 3rd element : ");
    scanf("%d", &third->data);
    third->next = NULL;

    // Calling the function to traverse and print the list
    TraverseLinkedList(head);

    return 0;
}
