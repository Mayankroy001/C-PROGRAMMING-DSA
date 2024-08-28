#include<stdio.h>
#include<stdlib.h>

 struct node {
    int data;
    struct node *link;
 };

int main(){

   
   struct node *head = (struct node*) malloc(sizeof(struct node));
       head ->data = 45;
       head ->link = NULL;

       struct node *current = (struct node*) malloc(sizeof(struct node));
       current ->data = 95;
       current ->link = NULL;

       struct node *current2 = (struct node*) malloc(sizeof(struct node));
       current2 ->data = 79;
       current2 ->link = NULL;

       printf("The values : %d\n %d\n %d\n", head->data, current->data, current2 ->data);
       return 0;

}