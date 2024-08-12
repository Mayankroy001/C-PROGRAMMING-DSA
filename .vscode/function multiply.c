#include<stdio.h>
int multi(int a, int b)
{
    return a*b;
}


int main(){
    int a,b;
   
   
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    int c= multi(a,b);
  printf("The value after muktiply : %d\n",c);
  return 0;
}