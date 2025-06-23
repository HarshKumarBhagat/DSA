// #include<stdio.h>

// int main(){
//     int n;
//     float sum=0;
//     printf("enter the number:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("%f",sum/n);
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//     float principal, rate, time, compoundInterest;
    
//     scanf("%f %f %f", &principal, &rate, &time);
    
//     compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    
//     printf("Compound Interest: %.2f\n", compoundInterest);
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the elements of the array
    }

    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d %d\n", min, max); // Output the minimum and maximum values
    return 0;
}                       