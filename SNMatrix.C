#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],sum=0,i,j;
	clrscr();
	printf("\nEnter Elements of matrix 'a':");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter Elements of matrix 'b':");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	printf("\nDisplay Matrix 'a':");
	for(i=0;i<3;i++)
	{       printf("\n");
		for(j=0;j<3;j++)
		{
			printf(" %d", a[i][j]);
		}
	}
	printf("\nDisplay Matrix 'b':");
	for(i=0;i<3;i++)
	{       printf("\n");
		for(j=0;j<3;j++)
		{
			printf(" %d", b[i][j]);
		}
	}
	printf("\nArray c :");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d", c[i][j]);
		}
	}
	printf("\nTranspose of matrix a :");

	for(i=0;i<3;i++)
	{
	      printf("\n");
	      for(j=0;j<3;j++)
		{
			printf("%d ",a[j][i]);
		}
	}
	printf("\nAddition of array elements a is :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf(" %d", sum);
	printf("\nMaking diagonal elements of b zero");
	for(i=0;i<3;i++)
	{       printf("\n");
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				a[i][j]=0;
			}
			printf("%d ", a[i][j]);
		}
	}
      getch();
}