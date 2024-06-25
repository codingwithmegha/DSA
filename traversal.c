#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int a[4];  //array
	printf("Enter the array: \n");
	  for(i=0; i<4; i++)
	  {
	  scanf("%d",&a[i]);
      }
      printf("traversal of array is:");
      for(i=0; i<4; i++)
	  {
	  printf("%d\n",a[i]);
      }
      getch();
}




