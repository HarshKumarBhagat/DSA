// #include<stdio.h>

// int main(){
//     for (int i=1; i<=10; i = i+1) {
//         printf("Hello World \n");
//     }
//     return 0;
// }

// to increase variable value.

// #include<stdio.h>

// int main(){
//     for (int i=1; i<=10; i = i+1) {
//         printf("%d \n", i);
//     }
//     return 0;
// }

// to decrease variable value.

// #include<stdio.h>

// int main() {
//     for(int i=10; i>=1; i = i-1) {
//         printf("%d \n", i);
        
//     }
//     return 0;
// }      

//print the numbers from 0 to 10
// #include<stdio.h>

// int main(){
//     for (int i=0; i<=10; i=i+1) {
//         printf("%d \n", i);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     // increment operator
//     //++i (pre increment)
//     //i++(post imcrement)

//     int i=1;
//     // printf("%d \n", i++; // use then increase
//     // printf("%d \n", i);

//     printf("%d \n", ++i); // increase tnen use
//     printf("%d \n", i);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     // decrement operator
//     //--i (pre decrement)
//     //i--(post decrement)

//     int i=1;
//     // printf("%d \n", i--; // use then increase
//     // printf("%d \n", i);

//     printf("%d \n", --i); // increase tnen use
//     printf("%d \n", i);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     for(float i=1.0; i<=5.0; i++) {
//         printf("%f \n", i);
//     }
//     return 0;
// }

// #include<stdio.h>
    
// int main(){
//     for(float i=1.0; i<=5.0; i++) {
//         printf("%f \n", i);
//     }

//     for(char ch='a'; ch<='z'; ch++) {
//         printf("%c \n", ch);
//     }
//     return 0;
// }

// print the numbers from 0 to n, if n is given by user that is n = 4.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d", &n);

//     int i=0;
//     while(i <= n) {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

//WAP to find the greatest number among two.

// #include<stdio.h>

// int main(){
//     int num1,num2;
//     printf("enter first number;");
//     scanf("%d",&num1);
//     printf("enter second number :");
//     scanf("%d",&num2);

//     if(num1 > num2) {
//         printf("%d is greater.",num1);
//     } else if (num2 > num1) {
//         printf("%d is greater.",num2);
//     } else {
//         printf("Both numbers are equal.");
//     }

//     return 0;
// }

// WAP to whether the given number is single digit, two digit, three digit or more then three digit.

// #include<stdio.h>

// int main(){
//     int num;
//     printf("enter a number:");
//     scanf("%d",&num);

//     if(num >= 0 && num <= 9) {
//         printf("%d is a single digit number.",num);
//     } else if (num >= 10 && num <= 99){
//         printf("%d is a two digit number.",num);
//     } else if(num >= 100 && num <= 999) {
//         printf("%d is a three digit number.",num);
//     } else {
//         printf("%d is more than three digits.",num);
//     }

//     return 0;
// }

// WAP to convert milliseconds into h,m and seconds.

// #include<stdio.h>

// int main(){
//     long long milliseconds;
//     int hours, minutes,seconds;
//     printf("enter milliseconds:");
//     scanf("%d", &milliseconds);

//     hours = milliseconds/3600000;
//     minutes = (milliseconds % 3600000)/60000;
//     seconds = (milliseconds % 60000)/1000;

//     printf("%d milliseconds = %d hours %d minutes %d seconds\n", milliseconds, hours, minutes, seconds);

//     return 0;
// }

//WAP to find the largest number among two using ternary operator.

// #include <stdio.h>

// int main() {
//     // Declare variables for the two numbers
//     int num1, num2, largest;

//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     largest = (num1 > num2) ? num1 : num2;

//     printf("The largest number is: %d\n", largest);

//     return 0;
// }

//     #include <stdio.h>

//WAP to find the largest number among three using ternary operator.

// int main() {
//     int num1, num2, num3;

//     // Input three numbers
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     printf("Enter third number: ");
//     scanf("%d", &num3);

//     // Use ternary operators to find maximum
//     int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

//     printf("\nThe largest number is: %d", max);

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the number : ");
//     scanf("%d", &n);
    
//     if(n%2!=0){
//         printf("Weird\n");
//     }
//     else if (n%2==0 && n>=2 && n<=5){
//         printf("Not Weird\n");
//     }
//     else if (n%2==0 && n>=6 && n<=20){
//         printf("Wierd\n");
//     }
//     else if(n%2==0 && n>20)
//     {
//         printf("Not Weird");
//     }
//     else {
//         printf("error \n");
//     }
//     return 0;
// }