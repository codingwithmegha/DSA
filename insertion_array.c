#include <stdio.h>
int main() {
	int arr[10],n,i;
	int element;
	int position;
	printf("Enter the size");
	 scanf("%d",&n);
	 printf("Enter the array:\n");
	   for(i=0; i<n; i++)
	   {
	   	scanf("%d",&arr[i]);
	   }
    printf("enter the element to insert:");
    scanf("%d",&element);
    printf("enter the position");
    scanf("%d",&position);
    printf("Original array: ");
    insertElement(arr,n, element, position);
    n++; 
    printf("Array after insertion: ");
     for (i = 0; i <n; i++) {
        printf("%d ", arr[i]);
        }
    printf("\n");
    return 0;
}
void insertElement(int arr[], int n, int element, int position) {
    int i;
    for (i=n; i>=position; i--) {
        arr[i]=arr[i-1];
    }
    arr[position]=element;
}
