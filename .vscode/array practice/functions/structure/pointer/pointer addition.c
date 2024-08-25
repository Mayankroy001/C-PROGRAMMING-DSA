#include<stdio.h>
int main(){

    int x, y, z;
    x=10;
    y=45;
    
    int*ptr1;
    ptr1=&x;
    
    int*ptr2;
    ptr2=&y;
   
    z= *ptr1+ *ptr2;
    printf("value : %d\n",z);
    return 0;
}