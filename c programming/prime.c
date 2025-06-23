// prime number

#include<stdio.h>

int main(){
    int num,i,count=0;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
        if(count>2)
        break;
    }
    if(count==2)
    printf("%d isa prime number");
    else
    printf("%d is a not prime number");
    return 0;
}