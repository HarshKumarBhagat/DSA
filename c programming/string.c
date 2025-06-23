// WAP to find length of a string.

// #include<stdio.h>

// int main(){
//     char a[10];
//     int i;
//     printf("enter the name :");
//     gets(a);
//     i=0;
//     while(a[i]!='\0')
//     i++;
//     printf("length of string is :%d",i);
//     return 0;
// }

// WAP to copy one string to another string.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char source[] = "Hello, World!";
//     char destination[50];  // Make sure the destination array is large enough to hold the string

//     // Copy the string from source to destination
//     strcpy(destination, source);

//     // Print the copied string
//     printf("Source String: %s\n", source);
//     printf("Destination String: %s\n", destination);

//     return 0;
// }


// #include<stdio.h>       

// int main(){
//     char a[10],b[10];
//     int i;
//     i=0;
//     printf("enter the first string:");
//     gets(a);
//     while(a[i]!='\0'){
//         b[i]=a[i];
//         i++;
//     }
//     b[i]='\0';
//     printf("copied string is :%s",b);
//     return 0;
// }

// WAP to count number of words in a string.

// #include<stdio.h>

// int main(){
//     char a[100];
//     int i,words=1;
//     printf("enter the string :");
//     gets(a);
//     i=0;
//     while(a[i]!='\0'){
//         if(a[i] == ' ')
//         words++;
//         i++;
//     }
//     printf("number of words of a string is :%d",words);
//     return 0;
// }

// WAP to concatenate two strings.

// #include<stdio.h>

// int main(){
//     char a[50],b[50],c[100];
//     int i,j;
//     printf ("enter th first string:");
//     gets(a);
//     printf("enter th second string:");
//     gets(b);
//     i=0;
//     j=0;
//     while(a[i]!='\0'){
//         c[i]=a[i];
//         i++;
//     }
//     while(b[j]!='\0'){
//         c[i]=b[j];
//         i++;
//         j++;
//     }
//     c[i]='\0';
//     printf("concatenate string :%d",c);
//     return 0;
// }

// WAP to compare to strings in c in hindeglish.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[100], str2[100];

//     // User se input lene ke liye
//     printf("Pehli string daalo: ");
//     gets(str1);  // Input string 1

//     printf("Doosri string daalo: ");
//     gets(str2);  // Input string 2

//     // Strings ko compare karne ke liye
//     if (strcmp(str1, str2) == 0) {
//         printf("Dono strings same hain.\n");
//     } else {
//         printf("Dono strings alag hain.\n");
//     }

//     return 0;
// }

// WAP to covert lowercase string to uppercase in c hindeglish

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];

//     // Input string from the user
//     printf("Chhote akshar waala string daalein: ");
//     gets(str);  // Using gets to input the string

//     // Convert each character to uppercase using toupper
//     for (int i = 0; str[i] != '\0'; i++) {
//         str[i] = toupper(str[i]);
//     }

//     // Output the converted string
//     printf("Bade akshar waala string: %s\n", str);

//     return 0;
// }


// WAP to convert uppercase string to lowercase in c hindeglish

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];

//     // Input string from the user
//     printf("Bade akshar waala string daalein: ");
//     gets(str);  // Using gets to input the string

//     // Convert each character to lowercase using tolower
//     for (int i = 0; str[i] != '\0'; i++) {
//         str[i] = tolower(str[i]);
//     }

//     // Output the converted string
//     printf("Chhote akshar waala string: %s\n", str);

//     return 0;
// }

// WAP to find total number of alphabets,digits or special character in a string in c

// #include <stdio.h>
// #include <ctype.h>  // For isalpha, isdigit functions

// int main() {
//     char str[100];
//     int alphabets = 0, digits = 0, specialChars = 0;

//     // Input string from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string

//     // Loop through each character in the string
//     for (int i = 0; str[i] != '\0'; i++) {
//         // Check if the character is an alphabet
//         if (isalpha(str[i])) {
//             alphabets++;
//         }
//         // Check if the character is a digit
//         else if (isdigit(str[i])) {
//             digits++;
//         }
//         // Check if the character is a special character
//         else {
//             specialChars++;
//         }
//     }

//     // Output the counts
//     printf("Total Alphabets: %d\n", alphabets);
//     printf("Total Digits: %d\n", digits);
//     printf("Total Special Characters: %d\n", specialChars);

//     return 0;
// }

// WAP to count total number of vowals and consonants in a string in c

// #include <stdio.h>
// #include <ctype.h>  // For tolower() function

// int main() {
//     char str[100];
//     int vowels = 0, consonants = 0;

//     // Input string from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string (unsafe, consider using fgets())

//     // Loop through each character in the string
//     for (int i = 0; str[i] != '\0'; i++) {
//         // Convert the character to lowercase to handle both uppercase and lowercase vowels
//         char ch = tolower(str[i]);

//         // Check if the character is a vowel
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             vowels++;
//         }
//         // Check if the character is a consonant
//         else if ((ch >= 'a' && ch <= 'z')) {
//             consonants++;
//         }
//     }

//     // Output the counts
//     printf("Total Vowels: %d\n", vowels);
//     printf("Total Consonants: %d\n", consonants);

//     return 0;
// }

// // WAP to count total number of words in a string in c

// #include <stdio.h>
// #include <ctype.h>  // For isspace function

// int main() {
//     char str[100];
//     int wordCount = 0;
//     int i = 0;

//     // Input string from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string (unsafe, consider using fgets())

//     // Loop through the string and count words
//     while (str[i] != '\0') {
//         // Skip any spaces
//         if (!isspace(str[i])) {
//             // We have encountered the start of a word, count it
//             wordCount++;

//             // Move to the end of the word
//             while (str[i] != '\0' && !isspace(str[i])) {
//                 i++;
//             }
//         } else {
//             // If it's a space, just move to the next character
//             i++;
//         }
//     }

//     // Output the number of words
//     printf("Total words: %d\n", wordCount);

//     return 0;
// }

// WAP to check wheather a string is palindrome or not in c

// #include<stdio.h>
// #include<string.h>
//  int main()
//  {
//     char a[100],b[100];
//     printf("enter the string:");
//     gets(a);
//     b = strrev(a);
//     if(strcmpi(a,b)==0){
//         printf("/nPalindrome string");
//     }
//     else{
//         printf("/nNot a Palindrome string");
//     }
//     return 0;
//  }



// WAP to find first occurrence of a character in a given string in c

// #include <stdio.h>

// int main() {
//     char str[100], ch;
//     int i;

//     // Input string and character from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string (unsafe, consider using fgets())

//     printf("Character daalein jisko dhoondhna hai: ");
//     scanf("%c", &ch);

//     // Find the first occurrence of the character
//     int found = 0;  // Flag to check if character is found

//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             printf("Character '%c' ki pehli occurrence index %d par hai.\n", ch, i);
//             found = 1;
//             break;  // Exit the loop once the first occurrence is found
//         }
//     }

//     // If character is not found
//     if (!found) {
//         printf("Character '%c' string mein nahi hai.\n", ch);
//     }

//     return 0;
// }

// WAP to find last occurrence of a character in a given string in c

// #include <stdio.h>

// int main() {
//     char str[100], ch;
//     int i, lastIndex = -1;

//     // Input string and character from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string (unsafe, consider using fgets())

//     printf("Character daalein jisko last occurrence dhoondhna hai: ");
//     scanf("%c", &ch);

//     // Loop through the string to find the last occurrence
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             lastIndex = i;  // Update the index whenever the character is found
//         }
//     }

//     // Output the result
//     if (lastIndex != -1) {
//         printf("Character '%c' ki last occurrence index %d par hai.\n", ch, lastIndex);
//     } else {
//         printf("Character '%c' string mein nahi hai.\n", ch);
//     }

//     return 0;
// }

// WAP to search all occurrnences of a character in given string in c

// #include <stdio.h>

// int main() {
//     char str[100], ch;
//     int i, found = 0;

//     // Input string and character from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string (unsafe, consider using fgets())

//     printf("Character daalein jisko sabhi occurrences dhoondhna hai: ");
//     scanf("%c", &ch);

//     // Loop through the string to find all occurrences
//     printf("Character '%c' ki sabhi occurrences: ", ch);
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             printf("%d ", i);  // Print index of each occurrence
//             found = 1;
//         }
//     }

//     // If no occurrence was found
//     if (!found) {
//         printf("string mein nahi hai.\n");
//     } else {
//         printf("\n");
//     }

//     return 0;
// }

// WAP to count occurrences of a character in given string in c.

// #include <stdio.h>

// int main() {
//     char str[100], ch;
//     int i, count = 0;

//     // Input string and character from the user
//     printf("String daalein: ");
//     gets(str);  // Using gets to input the string (unsafe, consider using fgets())

//     printf("Character daalein jisko occurrences count karna hai: ");
//     scanf("%c", &ch);

//     // Loop through the string to count occurrences of the character
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             count++;  // Increment count when character is found
//         }
//     }

//     // Output the result
//     printf("Character '%c' ki total occurrences: %d\n", ch, count);

//     return 0;
// }
