#include<stdio.h>

float div(float a, float b)
{
    return a/b;
}


int main(){
float a,b;
printf("Enter the value of a : ");
scanf("%f",&a);

printf("Enter the value of b : ");
scanf("%f",&b);

float c=div(a,b);
printf("Value after division : %f\n",c);
return 0;
}