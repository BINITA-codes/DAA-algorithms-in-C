#include<stdio.h>
int a[10][10],n,m,visited[20];
void main()
{
		int v,i;
		void gread();
		void gwrite();
		void dfs(int v);
		void dft(int v);
		
    	gread();
	    gwrite();
	    printf("enter the start vertex");
		scanf("%d",&v);
		for(i=1;i<=n;i++)
				visited[i]=0;
		dfs(v);
	
}
void gread()
{
		int i,j,p,q;
	    printf("enter the number of vertices ");
		scanf("%d",&n);
		printf("enter the number of edges");
		scanf("%d",&m);
		for(i=1;i<=n;i++)
		    for(j=1;j<=n;j++)
			    a[i][j]=0;
		printf("enter the %d edges ",m);
		for(i=1;i<=m;i++)
		{
			    scanf("%d%d", &p,&q);
			     a[p][q]=a[q][p]=1;
		}
}
void gwrite()
{
			int i,j;
			for(i=1;i<=n;i++)
			{
					for(j=1;j<=n;j++)
						printf("%d",a[i][j]);
					printf("\n");	
			}
}
void dfs(int v)
{
		int w;
		printf("%d ",v);
		visited[v]=1;
		for(w=1;w<=n;w++)
				if(a[v][w]==1)
						if(visited[w]==0)
								dfs(w);
}
void dft(int n)
{
	int i;
	for(i=0;i<n;i++)
	i=0;
	for(i=1;i<n;i++)
	if(i=0)
		dfs(i);
}