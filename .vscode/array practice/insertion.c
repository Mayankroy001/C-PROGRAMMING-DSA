#include<stdio.h>

int main() {
    int a[10], i, pos, val;

    // Input the elements for the array (only 9 elements)
    for(i = 0; i < 9; i++) {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Input the position where new element is to be inserted
    printf("Enter the position where the element is to be inserted (1-10): ");
    scanf("%d", &pos);

    // Check if the position is valid
    if(pos < 1 || pos > 10) {
        printf("Invalid position! Please enter a position between 1 and 10.\n");
        return 1;  // Exit the program if position is invalid
    }

    // Input the value to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &val);

    // Print the original array
    printf("Original array is: ");
    for(i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }

    // Shift the elements to the right to make room for the new element
    for(i = 8; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }

    // Insert the new element at the given position
    a[pos - 1] = val;

    // Print the updated array
    printf("\nUpdated array is: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
