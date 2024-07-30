#include<stdio.h>
int main(){
    printf("hello world\n");
    int arr[6];
    arr[0]=54;
   
    arr[1]=77;
    arr[2]= 89;
   arr[3]=54;
    arr[4]=77;
   arr[5]= 89;
    //printf("The all arrays : %d\n",arr[1]);
    
    //ANOTHER PROCESS=====================
     int marks[4];

    for (int i = 0; i<4; i++) {
        printf("Enter the marks of student%d:", i + 1);
        scanf("%d", &marks[i]);
    }

    return 0;
}
