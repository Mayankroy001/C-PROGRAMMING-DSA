#include<stdio.h>
#include<stdlib.h>

int main(){

    int*ptr;
    ptr=(int*)calloc(6,sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated suucessfully\n");
    }else{
        printf("Memory allocted successfully\n");
    }
free(ptr);
printf("memory freed successfully\n");
    return 0;
}

