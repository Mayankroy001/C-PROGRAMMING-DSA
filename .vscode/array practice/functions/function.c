#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main(){
int a,b;

printf("Enter the value of a: ");
scanf("%d",&a);

printf("Enter the value of b: ");
scanf("%d",&b);

int c= sum(a,b);
printf("The sum value is: %d\n ",c);


return 0;
}