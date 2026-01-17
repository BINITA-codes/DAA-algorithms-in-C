//Selection Sort
//Design and Analysis of Algorithms(DAA)
//time Complexity
//Best Case:O(n^2)
//Average Case: O(n^2)
//Worst case:O(n^2)
//Space Complexity:O(1)
#include<stdio.h>
#include<stdlib.h>
void main()
{
		void readar (int *a,int *n);
		void selectionSort(int *a, int n);
		void writear(int *a,int n);
		int a[20],n;
		readar(a,&n);
		selectionSort(a,n);
		writear(a,n);
}

void readar (int *a,int *n)
{
		int i;
		printf("enter size");
		scanf("%d",n);
		printf("enter elements:");
		for(i=1; i<=*n; i++)
	   		scanf("%d",&a[i]);
}

void selectionSort(int *a, int n)
{
	int i,j,t,m;
		for(i=1; i<=n-1; i++)
		{
				 m=i;
				for(j=i+1; j<=n; j++)
					if(a[j]<a[m])
						m=j;
		
		        if(i!=m)
				{
						t=a[i];
						a[i]=a[m];
						a[m]=t;
				}
		}
}

void writear(int *a,int n)
{
		int i;
		for(i=1; i<=n; i++)
			printf("%d\t",a[i]);
}

