#include<stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
}

int main() {
   
   //here i is for loop;
    // n is for number of elements;
    // a[i] is for the print arrray;
    // pos is for positioning;
    // Elements is for the number i want to insert in the given array;
    
    int a[100], i, n, pos, element;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Insert element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the position and element you want to add: ");
    scanf("%d%d", &pos, &element);

    // Increase array size for the new element
    n++;

    // Shift elements forward to make space for the new element
    for (i = n - 1; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element at the specified position
    a[pos - 1] = element;

    // Display the updated array
    display(a, n);

    return 0;
}
