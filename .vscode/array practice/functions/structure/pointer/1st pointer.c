#include<stdio.h>
int main(){
int x;
x=10;

int*ptr; //declare ponter
ptr=&x;
printf("%d\n",x); //output for intiger value
printf("%p",&x);  //output for pointer value
return 0;
}