#include<stdio.h>
#include<stdlib.h>
int a[20],n;
void main()
{
		void readarr();
		void writearr();
	    void merge_sort(int l, int u);
		
		readarr();
		writearr();
		merge_sort(1,n);
		printf("\nSorted array is  ");
		writearr();
		
}
void readarr()
{
	int i;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
}
void writearr()
{
	int i;
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
}
void merge(int l,int m,int u)
{
		int i,j,k,c[20];
		
		i=l;
		j=m+1;
		k=l;
		while((i<=m)&&(j<=u))
		
				if(a[i]<a[j])
				{
						c[k]=a[i];
						i=i+1;
						k=k+1;
				}
				else
				{
						c[k]=a[j];
						j=j+1;
						k=k+1;
				}
		while(j<=u)
		{
						c[k]=a[j];
						j=j+1;
						k=k+1;
		}
		while(i<=m)
		{
						c[k]=a[i];
						i=i+1;
						k=k+1;
		}
		for(i=l;i<=u;i++)
			    	a[i]=c[i];
			
}
void merge_sort(int l,int u)
{
		int m;
		if(l<u)
		{
				m=(l+u)/2;
				merge_sort(l,m);
				merge_sort(m+1,u);
				merge(l,m,u);
		}
}