#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,a[2][2],b[2][2];
    int c[2][2];  
	printf("Enter the 1st array:");
	  for(i=0; i<2; i++)
	  {
	     for(j=0; j<2; j++)
	       {
     	      scanf("%d",&a[i][j]);
           }
       }
              printf("Enter the 2st array:");
	              for(i=0; i<2; i++)
	                {
					  for(j=0; j<2; j++)
	                  {
                      	scanf("%d",&b[i][j]);
                      }
                  }
                      for(i=0; i<2; i++)
                      {
	                 for(j=0; j<2; j++)
	                 {
                        c[i][j]=a[i][j]+b[i][j];
                    }
                }
                         printf("Sum of array:");
                                 for(i=0; i<2; i++)
	                         for(j=0; j<2; j++)
	                             {
     	                             printf("%d\n",c[i][j]);
                                 }
getch();
}
