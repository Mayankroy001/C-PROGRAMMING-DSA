#include<stdio.h>
int main(){
int x;
x=10;

int*ptr; //declare ponter
ptr=&x;
printf("%d\n",x); //output for intiger value
printf("%p\n",&x);  //output for pointer value
printf("%p",ptr);  //another way to ouput pointer
return 0;
}