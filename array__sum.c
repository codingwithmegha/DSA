#include<stdio.h>
#include<conio.h>
void main()
    {
	int i,sum=0,a[5];
    printf("Enter the array:");
        for(i=0; i<5; i++)
		{
    scanf("%d",&a[i]);
        }
		for(i=0; i<5; i++)
		{
			sum=sum+a[i];
		}
		printf("Sum is:%d",sum);
	}
		getch();
	
