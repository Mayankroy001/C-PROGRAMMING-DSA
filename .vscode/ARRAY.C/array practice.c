#include<stdio.h>
int main(){
    int num[10];
    for(int i=0; i<10; i++){
        printf("Enter the %d value : ", i+1);
      scanf("%d", &num[i]);
    }
  
   for (int i = 0; i < 10; i++)
   {
    printf("Enter the %d value : %d\n", num[i]);
   }
   return 0;
}