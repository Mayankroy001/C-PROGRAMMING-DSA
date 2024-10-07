#include<stdio.h>

// Function to display the array elements
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Traversal element %d: %d\n", i+1, arr[i]);  // Printing the elements
    }

}

int main() {
    int arr[100];  // Declare the array with sufficient size
    int n;

    // Taking input for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking input for the array elements
    printf("Enter the elements to traverse: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Correct usage of scanf
    }

    // Call the display function to print the array elements
    display(arr, n);

    return 0;
}
