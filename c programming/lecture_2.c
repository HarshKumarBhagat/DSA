// #include<stdio.h>

// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d", &age);
     
//     if (age > 18) {
//         printf("adult \n");
//     }
//     else {
//         printf("not adult \n");
//     }
//     return 0; 
  
// }

// #include<stdio.h>

// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d", &age);
     
//     if (age > 18) {
//         printf("adult \n");
//     }
//     else if(age > 13 && age <= 18) {
//         printf("teenager \n");
//     }
//     else {
//         printf("child");
//     }
//     return 0; 
  
// }


// ternary operator.
// #include<stdio.h>

// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d", &age);
     
//     age >= 18 ?printf("adult \n") : printf("not adult \n");
//     return 0; 
  
// }

// switch 0perator.

// #include<stdio.h>

// int main(){
//     int day;//1-monday; 2-tuesday.....
//     printf("enter day (1-7) : ");
//     scanf("%d",&day);

//     switch(day){
//         case 1 : printf("monday \n");
//         break;
//         case 2 : printf("tuesday \n");
//         break;
//         case 3 : printf(" wednesday \n");
//         break;
//         case 4 : printf(" thursday \n");
//         break;
//         case 5 : printf("friday \n");
//         break;
//         case 6 : printf("saturday \n");
//         break;
//         case 7 : printf("sunday \n");
//         break;
//         default : printf("not a valid day \n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int day;//1-monday; 2-tuesday.....
//     printf("enter day (1-7) : ");
//     scanf("%d",&day);
//     switch(day){
//         case 1 : printf("monday \n");
//         break;
//         case 2 : printf("tuesday \n");
//         break;
//         case 3 : printf(" wednesday \n");
//         break;
//         case 4 : printf(" thursday \n");
//         //break;
//         case 5 : printf("friday \n");
//         //break;
//         case 6 : printf("saturday \n");
//         //break;
//         case 7 : printf("sunday \n");
//         //break;
//         default : printf("not a valid day \n");
//     }
//     return 0;
// }
// Nested iff statement.

// #include<stdio.h>

// int main(){
//     int number;
//     printf("enter number : ");
//     scanf("%d",&number);

//     if(number>= 0) {
//         printf("positive \n");
//         if(number % 2 == 0) {
//         printf("even \n");
//         } else {
//             printf("odd \n");
//         }
        
//     } else {
//         printf("negative \n");
//     }
//     return 0;
// }

// write a program to check if a student passed or failed.
//marks>30 is pass
//marks <=30 is fail

// #include<stdio.h>

// int main(){
//     int marks;
//     printf("enter marks(1-100) : ");
//     scanf("%d", &marks);

//     if (marks <= 30) {
//         printf("fail \n");
//     } else {
//         printf("pass \n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//         int marks;
//     printf("enter number(0-100) : ");
//     scanf("%d", &marks);

//     if(marks < 30) {
//         printf("c \n");
//     }
//     else if (marks >= 30 && marks < 70) {
//         printf("b \n");
//     }
//     else if(marks >= 70 && marks < 90) {
//         printf("a \n");
//     }
//     else {
//         printf("A+ \n");
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char ch;
//     printf("enter character : ");
//     scanf("%c",&ch);

//     if(ch >= 'A' && ch <= 'Z'){
//         printf("upper case");
//     }
//     else if(ch >= 'a' && ch <= 'z'){
//         printf("lower case");
//     }
//     else {
//         printf("not english letter");
//     }


//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int x;
//     printf("enter the number:");
//     scanf("%d", &x);

//     x % 2 == 0 ? printf("even") : printf("odd");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;++i) {
//         printf("%d/n",i);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num1, num2;
//     int sum, diff, product;
//     float quotient;
//     int remainder;

//     // Input two numbers
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     // Calculate operations
//     sum = num1 + num2;
//     diff = num1 - num2;
//     product = num1 * num2;
//     quotient = (float)num1 / num2;
//     remainder = num1 % num2;

//     // Print results
//     printf("\nResults:\n");
//     printf("Addition: %d + %d = %d\n", num1, num2, sum);
//     printf("Subtraction: %d - %d = %d\n", num1, num2, diff);
//     printf("Multiplication: %d * %d = %d\n", num1, num2, product);
//     printf("Division: %d / %d = %.2f\n", num1, num2, quotient);
//     printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i=0;
//     while(i<=5){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// WAP to print the sum of first n natural numbers. n=4

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);
    
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }

//     printf("sum is %d \n", sum);

//     return 0;
// }

#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three number");
    scanf("%d %d %d", &num1, &num2, &num3);
    switch(num1 > num2 && num1 >num3)
    {
        case 1:
        printf("%d is the greatest number", num1);
        break;
        case 0:
        switch(num2>num3)
        {
            case 1:
            printf("num2 is the greatest number", num2);
            break;
            case 0:
            printf("num3 is the greatest number", num3);
            break;
        }
        
    }
    return 0;
}