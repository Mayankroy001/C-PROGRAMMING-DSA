#include<stdio.h>
void print_divisors(int x){
    int i;
    for(i=1; i<=x; i++){
        if(x%i==0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int x;
    printf("Entet he number : ");
    scanf("%d",&x);
    print_divisors(x);
    return 0;
}