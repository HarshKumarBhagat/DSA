// WAP to cheak if a number is divisible by 2 or not. 

// #include<stdio.h>

// int main()
// {
//    int x;
//    printf("enter number : ");
//    scanf("%d",&x);
//    printf("%d", x % 2 == 0); 
//     return 0;
// }

// WAP if number is even or odd.
// #include<stdio.h>

// int main()
// {
//     int x;
//   // in even we print 1
//   //in odd we print 0  
//    printf("enter number : ");
//    scanf("%d",&x);
//    printf("%d", x % 2 == 0); 
//     return 0;
// }

// print true or false.
// // if it is sunday & it is raining then print it true.
// #include<stdio.h>

// int main()
// {
//  int issunday = 1;
//  int issnowing = 1;
//  printf("%d \n",issunday && issnowing);  
//     return 0;
// }

// // if it is sunday & it is raining then print it true.
// #include<stdio.h>

// int main()
// {
//  int issunday = 0;
//  int issnowing = 1;
//  printf("%d \n",issunday || issnowing);  
//     return 0;
// }

// if it is monday & it is raining then print it true.
// #include<stdio.h>

// int main(){
//     int monday = 1;
//     int raining = 0;
//     printf("%d \n", monday || raining);
//     return 0;
// 
// if a number is greater than 9 & less then 100->true(2 digit number)

// #include<stdio.h>

// int main(){
//     int x;
//     printf("enter number : ");
//     scanf("%d",&x);
//     printf("%d \n", x>9 && x<100);
//     return 0;
// }

                         #include<stdio.h>
                          int main() {
                          float principal, rate, time, simpleinterest;
                          printf("enter the principal amount") ;
                          scanf("%f", &principal) ;
                          printf("enter the rate of interest ") ;
                          scanf("%f", &rate) ;
                          printf(" enter the time (in year)") ;
                          scanf("%f", &time) ;
                          simpleinterest =(principal*rate*time) /100;
                          printf("the simple interest is%.2f\n", simpleinterest) ;
                           return 0;
                          }
