//insert in heap
#include<stdio.h>
#include<stdlib.h>
void main()
{		void readar(int *a,int *n);
		void create(int a,int n);
		void writear(int *a,int n);
		int a[20],n;
		
		readar(a,&n);
		create(a,n);
		writear(a,n);
}

void readar(int *a,int *n)
{
		int i;
		printf("enter size");
		scanf("%d",n);
		printf("enter elements:");
		for(i=1; i<=*n; i++)
	   			scanf("%d",&a[i]);
}


void insert(int *a,int n)
{
		int i,x;
		
		i=n;
		x=a[n];
		while((i>1)&&(a[i/2]<x))
		{
				a[i]=a[i/2];
				i=i/2;
		}
		a[i]=x;
}

void create(int a,int n)
{
		void insert (int *a,int n);
		int i;
		
		for(i=2;i<=n;i++)
				insert(a,i);
}


void writear(int *a,int n)
{
		int i;
		for(i=1; i<=n; i++)
			printf("%d\t",a[i]);
}
