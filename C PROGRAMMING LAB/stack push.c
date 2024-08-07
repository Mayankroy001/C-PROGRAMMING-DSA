#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_ar[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("stack overflow\n");
        return;
    }
    top = top + 1;
    stack_ar[top] = data;
}

int pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return -1;  // Indicating an error, as stack is empty
    }
    int data = stack_ar[top];
    top = top - 1;
    return data;
}

void print_stack()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack_ar[i]);
    }
    printf("\n");
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Print Stack\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                {
                    printf("Popped element: %d\n", value);
                }
                break;
            case 3:
                print_stack();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
