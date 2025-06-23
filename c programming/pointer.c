// // WAP of addition of two numbers.

// #include<stdio.h>

// int main(){
//     int a,b,*p,*q,c;
//     printf("\nenter two number:");
//     scanf("%d%d",&a,&b);
//     p=&a;
//     q=&b;
//     c = *p+*q;
//     printf("\n addition:%d",c);
//     return 0;
// }

// WAP to check a number is even of odd.

// #include<stdio.h>

// int main(){
//     int a,*p;
//     printf("enter the number:");
//     scanf("%d",&a);
//     p = &a;
//     if(*p%2==0)
//     printf("even");
//     else
//     printf("odd");
//     return 0;
// }

//WAP TO check a number is prime or not using pointers.

// #include<stdio.h>

// int main(){
//     int n,*p,i,count=0;
//     printf("\n enter the number :");
//     scanf("%d",&n);
//     p=&n;
//     for(i=1;i<=*p;i++)
//     {       
//         if(*p%i==0)
//         count++;
//     }
//     if(count==2)
//     printf("prime number");
//     else
//     printf("not a prime number");

//     return 0;
// }

// WAP to print and diplay an array through pointers.

// #include<stdio.h>

// int main(){
//     int a[10],i,*p;
//     for(i=0;i<10;i++){
//          printf("\enter number");
//         scanf("%d",&a[i]);
//     }
//     p=&a[0];
//     for(i=0;i<10;i++)
//     printf("\n%d",*(p+i));
   
//     return 0;
// }

// sum

#include<stdio.h>

int main(){
    int a[10],i,*p,sum=0;
    for(i=0;i<10;i++){
         printf("\enter number");
        scanf("%d",&a[i]);
    }
    p=&a[0];
    for(i=0;i<10;i++)
    sum=sum+*(p+i);
    printf("\nsum of array elements:%d",sum);
    return 0;
}


