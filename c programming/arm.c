#include<stdio.h>

int main(){
    int n, i ,sum=0;
    printf("enter the number");
    scanf("%d",&n);

    i=n;
    while(n>0){
        sum=sum+(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==i){
        printf(" armstrong number");
    }else{
        printf("not armstrong number");
    }
    return 0;
}