
// 26. WAP to print all numbers from 1 to N.
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         printf("%d",i);
//     }
//     return 0;
// } 

// WAP to print all even number from 1 to N.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         if(i%2==0)
//         printf("\n%d",i);
//     }
//     return 0;
// }

// WAP to print all alphabet from A TO Z.
//  #include<stdio.h>
 
//  int main(){

//     for(char ch='a'; ch<='z'; ch++){
//         printf("%c\n", ch);
//     }
//     return 0;
//  }

// WAP to print the series 1 4 9 16 25 ..... N.

// #include <stdio.h>

// int main() {
//     int N;

//     // Input the value of N
//     printf("Enter a number N: ");
//     scanf("%d", &N);

//     // Loop to print perfect squares from 1 to N
//     printf("Perfect squares up to %d are:\n", N);
//     for (int i = 1; i * i <= N; i++) {
//         printf("%d ", i * i);
//     }

//     return 0;
// }

// WAP to print the the sum of series ie sum of n natural no.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);

//     int sum=0;
//     for(int i=1;i<=n;i++){
//        sum = sum + i;
//     }
//     printf("sum is %d",sum);
//     return 0;
// }

// WAP to print the table of given number.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);

//     for(int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     }
//     return 0;
// }

// WAP to print the factorial of given number.
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     printf("fact is %d",fact);
//     return 0;
// }

// WAP to print the fibonacci series upto n number.
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter th number");
//     scanf("%d",&n);

//     int first = 0,second = 1,next;
//     printf("fibonacci sequence upto %d terms\n",n);
//     if(n>=1){
//         printf("%d",first);
//     }
//     if(n>=2){
//         printf("%d",second);
//     }
//     for(int i=3;i<=n;i++){
//         next = first+second;         
//         printf("%d",next);
//         first = second;
//         second = next;

//     }
//     return 0;
// }

// WAP to find the maximum of N numbers.
// #include<stdio.h>
// int main()
// {
//  int n,num,max;
//  printf("Enter number:");
//  scanf("%d",&n);
//  if(n<=0)
//  {
//      printf("Enter number:");
//      return 1;
//  }
//  printf("Enter number:");
//  scanf("%d",&num);
//  max = num;
//  for(int i=1; i<n; i++)
//  {
//   printf("Enter number:");
//   scanf("%d",&num);
//   if(num > max)
//   {
//       max = num;
//   }
// }
//  printf("Max = %d\n",max);return 0;
// }             

// WAP to find a number is armstrog or not,

// #include<stdio.h>

// int main(){
//     int n, i ,sum=0;
//     printf("enter the number");
//     scanf("%d",&n);

//     i=n;
//     while(n>0){
//         sum=sum+(n%10)*(n%10)*(n%10);
//         n=n/10;
//     }
//     if(sum==i){
//         printf(" armstrong number");
//     }else{
//         printf("not armstrong number");
//     }
//     return 0;
// }

// WAP to find the reverse of a given number.

// #include<stdio.h>

// int main(){
//     int i, rev=0;
//     printf("enter the number");
//     scanf("%d",&i);

//     while(i>0){
//         rev=(rev * 10) + i%10;
//         i=i/10;
//     }
//     printf("reverse of the number is %d",rev);
//     return 0;
// }

// WAP to perform the sum of all even digits of a given number 

// #include <stdio.h>

// int main() {
//     int num, sum = 0, digit;

//     // Input the number from the user
//     printf("Enter an integer: ");
//     scanf("%d", &num);
    
//     // Loop to extract each digit and check if it's even
//     while (num != 0) {
//         digit = num % 10;  // Get the last digit
        
//         if (digit % 2 == 0) {  // Check if the digit is even
//             sum += digit;  // Add the even digit to the sum
//         }
        
//         num /= 10;  // Remove the last digit from the number
//     }
    
//     // Output the sum of even digits
//     printf("Sum of even digits: %d\n", sum);
    
//     return 0;
// }

// prime number

// #include<stdio.h>

// int main(){
//     int num,i,count=0;
//     printf("enter the number :");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         if(num%i==0){
//             count++;
//         }
//         if(count>2)
//         break;
//     }
//     if(count==2)
//     printf("%d is a prime number");
//     else
//     printf("%d is a not prime number");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i, x,rev=0;
//     printf("enter the number");
//     scanf("%d",&i);
//     x=i;
//     while(i>0){
//         rev=(rev * 10) + i%10;
//         i=i/10;
//     }
//     if(rev==x)
//     printf("palindrom");
//     else
//     printf("not palindrom");
//     return 0;
// }



