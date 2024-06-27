#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp;
	int a[7];
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
			}
			for(i=0; i<n-1-i; i++)
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
			for(i=0; i<n; i++)
			{
				printf("Sorted array:");
			 printf("%d",a[i]);
			 printf("\n");
	     	}
    getch();
}
