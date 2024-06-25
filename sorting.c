#include<stdio.h>
int arr[10],i,j,n,temp;
void sorting(); 
void main()
{
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array:\n");
	  for(i=0; i<n; i++)
	  {
	  	scanf("%d",&arr[i]);
	  } 
	  sorting();
}
void sorting(){
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++)
		{
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		 }
		}
	}
	printf("Sorted array:\n");
	for(i=0; i<n; i++)
	  {
	  	printf("%d",arr[i]);
	  	printf("\n");
	  } 
	  }
