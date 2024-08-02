#include<stdio.h>
int main(){
    int num[100], sum,i,range;
    printf("Enter your range: ");
    scanf("%d",&range);

    printf("\n Enter %d values : ",range);
    for ( i = 0; i < range; i++);
    {
     scanf("%d", &num[i]);
    
    }
    sum = 0;
    for ( i = 0; i < range; i++)
    {
       sum = sum+num[i];
    
}
   printf("sum of %d numbers : %d", range,sum);
   printf("Average of %d numbers : %d", range, sum/range);
}
