#include<stdio.h>

struct student
{
  int id ;
  float cgpa;
  char name[100];
};

int main(){
    struct student s;
    printf("Enter student id : \n");
    scanf("%d",&s.id);
    printf("Enter the cgpa : ");
    scanf("%f",&s.cgpa);
    printf("Enter the  name : ");
    scanf("%s", s.name);
   
      printf("Name : %s; id:%d; cgpa:%f", s.name, s.id, s.cgpa);
    return 0;
}