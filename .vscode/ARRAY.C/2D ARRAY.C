#include<stdio.h>
int main()
{
    int marks[4][3]= { {22, 44, 66},
                       {33, 12, 34},
                       {55, 0, 0},
                       {0, 0, 0}};
    printf("The values : \n");
   
for(int i = 0; i < 4; i++){
 for (int j = 0; j < 4; j++){
    
 printf("%d\n",marks[i][j]);
}

printf("\n");
}
return 0;
}