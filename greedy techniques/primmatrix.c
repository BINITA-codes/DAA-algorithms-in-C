#include<stdio.h>
void main()
{
		int cost[10][10],n;
		void gread(int a[10][10],int *n);
		void gwrite(int a[10][10],int n);
		
		gread(cost,&n);
		gwrite(cost,n);
	
}
void gread(int a[10][10],int *n)
{
		int m;
		int i,j,p,q,w;
	    printf("enter the number of vertices ");
		scanf("%d",n);
		
		printf("enter the number of edges");
		scanf("%d",&m);
		
	    	for(i=1;i<=*n;i++)
		   		for(j=1;j<=*n;j++)
			    	a[i][j]=999;   	
			printf("enter the weighted edge %d of the two vertices p and q",m );
			for(i=1;i<=m;i++)
			{
			    scanf("%d%d%d", &p,&q,&w);
			     a[p][q]=a[q][p]=w;
			}
}
void gwrite(int a[10][10],int n)
{
			int i,j;
			for(i=1;i<=n;i++)
			{
					for(j=1;j<=n;j++)
						printf("%d\t",a[i][j]);
					printf("\n");	
			}
}