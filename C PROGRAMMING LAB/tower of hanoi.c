#include <stdio.h>


void TowerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    } else {
        // Move n-1 disks from source to auxiliary
        TowerOfHanoi(n - 1, source, destination, auxiliary);
        
        // Move the nth disk from source to destination
        printf("Move disk %d from %c to %c\n", n, source, destination);
        
        // Move n-1 disks from auxiliary to destination
        TowerOfHanoi(n - 1, auxiliary, source, destination);
    }
}

int main() {
    int n; // Number of disks

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the TowerOfHanoi function
    TowerOfHanoi(n, 'A', 'B', 'C'); // A=source, B=auxiliary, C=destination

    return 0;
}
