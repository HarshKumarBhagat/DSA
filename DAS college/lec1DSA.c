#include <stdio.h>
#include <stdlib.h>

void insert(int *list, int *size) {
    int pos, value;
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);
    pos--; // Convert to 0-based index

    // Check if the position is valid
    if (pos < 0 || pos > *size) { // Allow insertion at the end
        printf("Invalid position !!!!!!\n");
    }
     else 
     {
        // Shift elements to the right
        for (int i = *size; i > pos; i--) {
            list[i] = list[i - 1];
        }
        list[pos] = value; // Corrected the variable name from 'lsit' to 'list'
        (*size)++;
        printf("Element inserted!!!!\n");
    }
}

void display(int *list, int size) { // Changed int *size to int size
    if (size == 0) {
        printf("List empty !!!!\n");
    } else {
        printf("Listed elements are:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", list[i]); // Added space for better readability
        }
        printf("\n"); // New line after displaying the list
    }
}

void delete(int *list, int *size) {
    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);
    pos--; // Convert to 0-based index

    // Check if the position is valid
    if (pos < 0 || pos >= *size) {
        printf("Position invalid!!!!!\n");
    } else {
        // Shift elements to the left
        for (int i = pos; i < *size - 1; i++) { // Changed condition to *size - 1
            list[i] = list[i + 1];
        }
        (*size)--;
        printf("Deleted Element!!!!\n");
    }
}

void search(int *list, int size) { // Changed int *size to int size
    if (size == 0) {
        printf("List empty!!!!!!\n");
    } else {
        int value, flag = 0;
        printf("Enter searching element: ");
        scanf("%d", &value); // Corrected variable name from 'vlaue' to 'value'
        for (int i = 0; i < size; i++) {
            if (list[i] == value) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            printf("Found element!!!!\n");
        } else {
            printf("Not found element!!!\n");
        }
    }
}

int main() {
    int list[100], size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter the elements of the list:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }

    insert(list, &size);
    display(list, size);
    delete(list, &size);
    display(list, size);
    search(list, size);
    
    return 0;
}