#include<stdio.h>
void main()
{
		int cost[10][10],n,t[20][3],mc,i;
		void gread(int a[10][10],int *n);
		void gwrite(int a[10][10],int n);
		
		gread(cost,&n);
		gwrite(cost,n);
		prim(n,cost,t,&mc);
		printf("minimum spanning tree:");
		for(i=1;i<n-1;i++)
			printf("%d %d\n",t[i][1],t[i][2]);
		printf("%d",mc);
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
int pmin(int cost[70][10],int n,int *pnear)
{
	int i,m,mdata,k;
		i=1;
		while(pnear[i]==0)
		{
				i=i+1;
		}
				m=i;
				mdata=cost[i][pnear[i]];
				for(k=i+1;k<=n;k++)
					if(pnear[k]!=0)
						if(cost[k] [pnear[k]]<mdata)
						{
								m=k;
								mdata=cost[k][pnear[k]];
				    	}
				return m;    	
		
}
int prim(int n,int cost[10][10],int t[10][3],int *mc)
{
	int i,j,pnear[10],k;
		 *mc=0;
		for(i=2;i<n;i++)
		
			pnear[i]=1;
		pnear[1]=0;
		
			for(i=1;i<n-1;i++)
			{
				j=pmin(cost,n,pnear);
		
					
							t[i][1]=j;
							t[i][2]=pnear[j];
							*mc+=cost[j][pnear[j]];
							
							pnear[j]=0;
							if((pnear[k]!=0)&&(cost[k][pnear[k]]>cost[k][j]));
							
							pnear[k]=j;				
					
			}
				
}
