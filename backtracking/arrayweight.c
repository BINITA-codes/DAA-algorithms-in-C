#include<stdio.h>
#include<conio.h>
typedef struct edge
{
	int f;
	int s;
	int wt;
}edge;
void main()
{
	void heapify(edge *a,int m);
	edge a[20];
	int  i,n,m;
	printf("Enter the number of vertices");
	scanf("%d",&n);
	printf("Enter the number of edges");
	scanf("%d",&m);
	printf("Enter the weighted edge %d of two vertices source and destination\n",m);
	for(i=1;i<=m;i++)
	{	
		scanf("%d%d%d",&a[i].f,&a[i].s,&a[i].wt);
	}
	for(i=1;i<=m;i++)
	{
			printf("%d-%d:%d\n",a[i].f,a[i].s,a[i].wt);
	}
	heapify(a,m);
		printf("after minheap\n");
		for(i=1;i<=m;i++)
	{
			printf("%d-%d:%d\n",a[i].f,a[i].s,a[i].wt);
	}
}
void adjust(edge *a,int i,int n)
{
		int j;
		edge x;
		x=a[i];
		j=2*i;
		while(j<=n)
		{
			if(j<n)
				if(a[j].wt>a[j+1].wt)
					j=j+1;
			if(a[j].wt<x.wt)
			{
				a[j/2]=a[j];
				j=2*j;
			}
			else
				break;
		}
		a[j/2]=x;
}
void heapify(edge *a,int n)
{
		int i;
		for(i=n/2;i>=1;i--)
			adjust(a, i, n);
}
