// Lab Experiment 1
#include<stdio.h>
#define MAX_SIZE 100
void insert(int *arr, int *size){
	int pos, value, i;
	printf("Enter Position : ");
	scanf("%d", &pos);
	printf("Enter Value : ");
	scanf("%d", &value);
	if(pos > *size || pos <= 0)
		printf("Invalid Position !!!!\n");
	else{
		for(i=*size; i>=pos; i--){
			arr[i]=arr[i-1];
		}
		arr[pos-1]=value;
		(*size)++;
		printf("Element Inserted !!!\n");
	}
}    
void printList(int *arr, int n){
	if(n == 0)
		printf("List is empty !!!\n");
	else{
		int i;
		printf("List Elements are : ");
		for(i=0; i<n; i++){
			printf("%d ", arr[i]);
		}	
	}
}
void delete(int *arr, int *size){
	int pos, i;
	printf("Enter Position : ");
	scanf("%d", &pos);
	if(pos<=0 || pos>*size)
		printf("Invalid position !!!!\n");
	else{
		for(i=pos-1; i<*size-1; i++){
			arr[i]=arr[i+1];
		}
		(*size)--;
		printf("Element Deleted !!!!\n");  
	}
}
void search(int *arr, int size){
	int value, i, flag = 0;
	printf("Enter searching element : ");
	scanf("%d", &value);
	for(i=0; i<size; i++){
		if(arr[i]==value){
			flag=1;
			break;
		}
	}
	if(flag == 1)
		printf("Element found !!!\n");
	else
		printf("Not Found !!!!\n");
}
int main(){
	int arr[MAX_SIZE], size, i;
	printf("Enter list size : ");
	scanf("%d", &size);
	printf("Enter List Elements : ");
	for(i=0; i<size; i++){
		scanf("%db", &arr[i]);
	}
	while(1){
		printf("1. Insertion\n");
		printf("2. Deletion\n");
		printf("3. Traversing\n");
		printf("4. Searching\n");
		printf("5. Exit\n");
		int choice;
		printf("Enter Choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				insert(arr, &size);
				break;
			case 2:
				delete(arr, &size);
				break;
			case 3:
				printList(arr, size);
				break;   
			case 4:
				search(arr, size);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid Choice !!!!!!!\n");
		}
		printf("\n");
		system("pause");
	}
	
	return 0;
}