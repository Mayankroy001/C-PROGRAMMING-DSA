#include<stdio.h>
int main(){
    int num[5], sum=0;
   
    
    for (int i = 0; i < 5; i++)
    {
       printf("The %d sum value want to add : ",i+1);
       scanf("%d", &num[i]);
   sum +=num[i];
    }
   printf("The sum values are : %d\n",sum);
   
   return 0;
  
}