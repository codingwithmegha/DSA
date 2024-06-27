#include<stdio.h>
#include<conio.h>
void bubble_sort(int[]);
void print_sort(int[]);
int n,i,j;
void main()
{
	int a[6];
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
			}
			bubble_sort(a);
			print_sort(a);
			getch();	
}
void bubble_sort(int a[])
{
	int temp;
	for(i=0; i<n-1; i++)
			{
				for(j=0; j<n-1; j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}		
}
void print_sort(int a[])
{
	for(i=0; i<n; i++)
			{
			 printf("%d",a[i]);
			 printf("\n");
	     	}	
}
