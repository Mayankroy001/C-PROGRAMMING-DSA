#include<stdio.h>

// Function to display the array elements
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Traversal element %d: %d\n", i+1, arr[i]);
    }
}

// Function to insert an element at a specified index in the array
int indinsertion(int arr[], int size, int index, int element, int capacity) {
    if(size >= capacity) {
        return -1;  // If array is full, insertion is not possible
    }

    // Shifting elements to the right
    for(int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Inserting the element at the desired index
    arr[index] = element;
    return size + 1;  // Return the new size of the array
}

int main() {
    int arr[100];  // Declaring an array with capacity 100
    int size, index, element, capacity = 100, n;

    // Taking input for the initial size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Taking input for the array elements
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the current array
    display(arr, size);

    // Taking input for the index and the element to be inserted
    printf("Enter the position (index) where you want to insert an element: ");
    scanf("%d", &index);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Calling the insertion function
    int newSize = indinsertion(arr, size, index, element, capacity);

    if(newSize == -1) {
        printf("Array is full, cannot insert element.\n");
    } else {
        printf("Array after insertion:\n");
        display(arr, newSize);
    }

    return 0;
}
