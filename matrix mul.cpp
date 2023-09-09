#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50];
	int m,n,p,q,i,j,k,sum;
	printf("enter no.of rows and columns of first matrix:\n");
	scanf("%d %d",&m,&n);
	printf("enter the first matrix elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix 1 is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter no.of rows and columns of second matrix:\n");
	scanf("%d %d",&p,&q);
	printf("enter the second matrix elements:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix 2 is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	if(n!=p)
	{
		printf("cannot multiply");
	}
	else
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			sum=0;
			for(k=0;k<m;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
		}
	}
	printf("product of two matrices is:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
