#include<stdio.h>
#include<stdlib.h>

int main(){
    int*ptr;
    ptr=(int*)calloc(6, sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated\n");
    }else{
        printf("Memory allocated\n");
    }
return 0;
}