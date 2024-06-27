#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10];
	int i,largest=0;
	printf("enter the array:");
	  for(i=0; i<10; i++)
	  {
	  	scanf("%d",&arr[i]);
	  }
	for(i=0; i<10; i++)
	  {
	  	if(arr[i]>largest){
	  		largest=a[i];
		  }
	  }  
	  	printf("Largest number in the array is: %d",largest);
}
