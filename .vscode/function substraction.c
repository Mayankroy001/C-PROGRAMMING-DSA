#include<stdio.h>
 sub(int a, int b)
{
    return a-b;
}
int main(){
int a,b;


printf("Enter the value of a : ");
scanf("%d",&a);

printf("Enter the value of b : ");
scanf("%d",&b);


int c=sub(a,b);
printf("The value after substraction : %d\n",c);
return 0;
}