#include<stdio.h>
void even_or_odd(int x){
    if(x%2==0){
    printf("Even");
   }else{
    printf("odd");
  }
}

    int main(){
        int x;
       printf("Enter the number to check: ");
       scanf("%d",&x);
       even_or_odd(x);
        return 0;
    }