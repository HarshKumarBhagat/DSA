//WAP to read and display the eiements of an array.

// #include <stdio.h>

// int main() {
//     int n;

//     // Prompt the user to enter the size of the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n]; // Declare an array of size n

//     // Read the elements of the array
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Display the elements of the array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// WAP to display the elements of an array in reverse order.

// #include <stdio.h>

// int main() {
//     int n;

//     // Ask the user to input the number of elements in the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Input elements of the array
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Display the array elements in reverse order
//     printf("Array elements in reverse order:\n");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// WAP to find the sum of all elements of an array.

// #include <stdio.h>

// int main() {
//     int n, sum = 0;

//     // Ask the user to input the number of elements in the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Input elements of the array
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Calculate the sum of all elements in the array
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     // Output the sum
//     printf("Sum of all elements: %d\n", sum);

//     return 0;
// }

// WAP to copy data from one array to anoter array.
// #include <stdio.h>

// int main() {
//     int n;

//     // Ask the user to input the number of elements in the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr1[n], arr2[n];

//     // Input elements of the first array
//     printf("Enter %d elements for the first array:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     // Copy elements from arr1 to arr2
//     for (int i = 0; i < n; i++) {
//         arr2[i] = arr1[i];
//     }

//     // Display the elements of the second array (copied array)
//     printf("Elements of the second array after copying:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr2[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the elements of array");
//     scanf("%d",&n);

//     int arr1[n],arr2[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr1[i]);
//     }

//     for(int i=0;i<n;i++){
//         arr2[i]=arr1[i];
//     }

//     for(int i=0;i<n;i++){
//         printf("%d",arr2[i]);
//     }
    
//     return 0; 
// }


// WAP to count number of even and odd elements in array.

// #include <stdio.h>

//     int main() {   
//     int n;
    
//     // Ask user for the number of elements in the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n]; // Declare the array
    
//     // Input the elements of the array
//     printf("Enter the elements of the array: ");
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Initialize counters for even and odd numbers
//     int even_count = 0, odd_count = 0;
    
//     // Loop through the array and check for even and odd numbers
//     for( int i = 0; i < n; i++) {
//         if(arr[i] % 2 == 0) {
//             even_count++; // Increment even counter if the number is even
//         } else {
//             odd_count++;  // Increment odd counter if the number is odd
//         }
//     }
    
//     // Print the result
//     printf("Number of even elements: %d\n", even_count);
//     printf("Number of odd elements: %d\n", odd_count);
    
//     return 0;
// }

// WAP to find largest element in array.

// #include <stdio.h>

// int main() {
//     int n, i;

//     // Ask user for the number of elements in the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n]; // Declare the array
 
//     // Input the elements of the array
//     printf("Enter the elements of the array: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Assume the first element is the largest initially
//     int largest = arr[0];

//     // Loop through the array to find the largest element
//     for(i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             largest = arr[i];  // Update the largest element if a bigger one is found
//         }
//     }

//     // Print the largest element
//     printf("The largest element in the array is: %d\n", largest);

//     return 0;
//   }

// WAP to find the 2nd largest element in array.

// #include <stdio.h>

// int main() {
//     int n;

//     // Input size of array
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     if (n < 2) {
//         printf("Array must have at least two elements to find the second largest element.\n");
//         return 1; // Exit if there are less than 2 elements
//     }

//     int arr[n];

//     // Input elements of the array
//     printf("Enter %d elements of the array: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize first and second largest elements
//     int largest = arr[0];
//     int secondLargest = -2147483648; // A very small number (or use INT_MIN from limits.h)

//     // Traverse through the array
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest; // Update second largest
//             largest = arr[i]; // Update largest
//         } else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i]; // Update second largest if not equal to largest
//         }
//     }

//     if (secondLargest == -2147483648) {
//         printf("No second largest element found.\n");
//     } else {
//         printf("The second largest element is: %d\n", secondLargest);
//     }

//     return 0;
// }

// WAP to count the frequency of a given element in array.

// #include <stdio.h>

// int main() {
//     int n, i, element, count = 0;
    
//     // Ask user for the number of elements in the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n]; // Declare the array
    
//     // Input the elements of the array
//     printf("Enter the elements of the array: ");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Ask user for the element to find the frequency of
//     printf("Enter the element to find its frequency: ");
//     scanf("%d", &element);
    
//     // Loop through the array to count occurrences of the given element
//     for(i = 0; i < n; i++) {
//         if(arr[i] == element) {
//             count++;  // Increment count if the element matches
//         }
//     }
    
//     // Print the frequency of the element
//     printf("The frequency of %d in the array is: %d\n", element, count);
    
//     return 0;
// }

// 2D array .

// WAP  to read and display the elements of 2D array.
//  #include<stdio.h>
 
//  int main(){
//     int a[3][3],i,j;
//     for(i=0;i<3;i++)
//     for(j=0;j<3;j++)
//     {
//         printf("\nenter value for 2D array: ");
//         scanf("%d",&a[i][j]);
//     }
//     printf("\n2D array elements are :");
//     for(i=0;i<3;i++)
//     {
//     printf("\n");
//     for(j=0;j<3;j++)
//     printf("%d\t",a[i][j]);
//     }
//     return 0;
//  }

// WAP to perform the sum of all the elements in a 2D array.

// #include <stdio.h>

// int main() {
//     int rows, cols;
    
//     // Input the number of rows and columns
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
    
//     int array[rows][cols];  // Declare a 2D array with the given dimensions
//     int sum = 0;  // Variable to store the sum of elements
    
//     // Input elements into the 2D array
//     printf("Enter the elements of the array:\n");
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             printf("Enter element at [%d][%d]: ", i, j);
//             scanf("%d", &array[i][j]);
//         }
//     }
    
//     // Calculate the sum of all elements
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             sum += array[i][j];
//         }
//     }
    
//     // Output the sum of all elements
//     printf("The sum of all elements in the 2D array is: %d\n", sum);
    
//     return 0;
// }

// WAP TO PERFORM THE SUM OF EACH ROW AND COLUMN OF 2D ARRAY.

// #include <stdio.h>

// int main() {
//     int rows, cols;
    
//     // Input the number of rows and columns
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);
    
//     int array[rows][cols];  // Declare a 2D array with the given dimensions
//     int rowSum, colSum;
    
//     // Input elements into the 2D array
//     printf("Enter the elements of the array:\n");
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             printf("Enter element at [%d][%d]: ", i, j);
//             scanf("%d", &array[i][j]);
//         }
//     }
    
//     // Calculate and print the sum of each row
//     printf("\nSum of each row:\n");
//     for(int i = 0; i < rows; i++) {
//         rowSum = 0;
//         for(int j = 0; j < cols; j++) {
//             rowSum += array[i][j];
//         }
//         printf("Sum of row %d: %d\n", i + 1, rowSum);
//     }
    
//     // Calculate and print the sum of each column
//     printf("\nSum of each column:\n");
//     for(int j = 0; j < cols; j++) {
//         colSum = 0;
//         for(int i = 0; i < rows; i++) {
//             colSum += array[i][j];
//         }
//         printf("Sum of column %d: %d\n", j + 1, colSum);
//     }
    
//     return 0;
// }

// WAP to perform the sum of two matrix.

// #include <stdio.h>

// int main() {
//     int m, n, i, j;

//     // Input number of rows and columns
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &m, &n);

//     int matrix1[m][n], matrix2[m][n], sum[m][n];

//     // Input elements of the first matrix
//     printf("Enter elements of first matrix:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             printf("Enter element [%d][%d]: ", i+1, j+1);
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     // Input elements of the second matrix
//     printf("Enter elements of second matrix:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             printf("Enter element [%d][%d]: ", i+1, j+1);
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // Perform the sum of matrices
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             sum[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     // Display the result
//     printf("Sum of the two matrices:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// WAP to perform the addition of two matrix
#include<stdio.h>
int main()
{
    int rowSize, colSize;
    printf("Enter row and column size of matrix : ");
    scanf("%d", &rowSize, &colSize);
    int matrix1[rowSize][colSize], matrix2[rowSize][colSize];
    printf("Enter 1st elements :\n ");
    scanf("%d", &matrix1);
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            scanf("%d", matrix1[i][j]);
        }
    }
    printf("Enetr 2nd elements : \n");
    scanf("%d", &matrix2);
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // logic to perform addition of two matrix
    for(int i=0; i<rowSize; i++)
    {
    for(int j=0; j<colSize; j++)
    {
        int sum = matrix1[i][j] + matrix2[i][j];
        printf("%d ", sum);
    }
    printf("\n ");
    }
    return 0;
}

// WAP to perform the multiplication  of two matrix
#include<stdio.h>
int main()
{
    int rowSize, colSize;
    printf("Enter row and column size of matrix-1 : ");
    scanf("%d", &rowSize, &colSize);
    int matrix1[rowSize][colSize];
    printf("Enter 1st elements :\n ");
    scanf("%d", &matrix1);
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            scanf("%d", matrix1[i][j]);
        }
    }
    int rowSize1, colSize1;
    printf("Enter row and column size of matrix-2 : ");
    scanf("%d%d", &rowSize1, &colSize1);
    int matrix2[rowSize1][colSize1];
    printf("Enetr 2nd elements : \n");
    scanf("%d", &matrix2);
    for(int i=0; i,rowSize1; i++)
    {
        for(int j=0; j<colSize1; j++)
    {
        scanf("%d", &matrix2[i][j]);
    }
}
    // logic to multiply 2 matrix
    printf("Matrix multiplication is \n ");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize1; j++)
        {
            int sum =0,k;
            for(int k=0; k<rowSize1; k++);
           {
               sum += matrix1[i][k] * matrix2[k][j];
           }   
           printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int rowSize,colSize;
//     printf("Enter row and column size :");
//     scanf("%d%d",&rowSize, &colSize);
//     int arg[rowSize][colSize];
//     printf("Enter the value of Array : ");
//     for(int i=0; i<rowSize; i++)
//     {
//         int sum=0;
//     for(int j=0; j<colSize; j++)
//     {
//         scanf("%d",arg[i][j]);
//        sum = sum +arg[i][j];
//     }
//     printf("Sum of %d row is %d\n",i,sum);
//     }
//     for(int i=0; i<colSize; i++)
//     {
//         int sum=0;
//     for(int j=0; j<rowSize; j++)
//        {
//         printf("%d",arg[j][i]);
//         sum = sum + arg[j][i];
//        }
//        printf("Sum of %d column is %d\n",i,sum);
//     }
//     return 0;
// }
// // WAP to perform the sum of diagonal elements of 2D array in C.
// #include<stdio.h>
// int main()
// {
//     int rowSize,colSize, arg;
//     printf("Enter row and column size :");
//     scanf("%d%d",&rowSize, &colSize);
//     int arg1[rowSize][colSize],arg2[rowSize][colSize],result[rowSize][colSize];
//     printf("Enter the value of Array : ");
//     for(int i=0; i<rowSize; i++)
//     {
//         for(int j=0;j<colSize;j++)
//     {
//     scanf("%d", &arg[rowSize][colSize]);
//     }
// }
//     // Addition logic
//     for(int i=0;i<rowSize;i++)
//     {
//         for(int j=0;j<colSize;j++)
//         sum +=arg[i][i];
//     }
//     printf("Sum of main diagonal is %d\n",sum);
//     int sum1=0;
//     for(int i=0; j=colSize-1; i<rowSize && j>=0; i++; j--)
//     {
//         sum1 +=arg[i][j];
//     }
//     printf("Sum of minor diagonal is %d\n",sum1);
//     return 0;
// }








