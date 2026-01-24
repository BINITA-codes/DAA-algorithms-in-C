
#include<stdio.h>
int a[10][10],n,m,visited[20];
void main()
{
		int v,i;
		void gread();
		void gwrite();
		void bfs(int v);
    	gread();
	    gwrite();
	    printf("enter the start vertex");
		scanf("%d",&v);
		for(i=1;i<=n;i++)
			visited[i]=0;
		bfs(v);
	
}
void gread()
{
		int i,j,p,q;
	    printf("enter the number of vertices\n ");
		scanf("%d",&n);
		printf("enter the number of edges\n");
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

void bfs(int v)
{
		void q_insert(int *q,int*f,int*r,int y);
		int q_delete(int *q,int *f,int *r);
		int q[20],f,r,u,w;
		f=r=0;
		printf("%d",v);
		visited[v]=1;
		u=v;
		while(1)
		{
				for(w=1;w<=n;w++)
				
						if(a[u][w]==1)
						
							
								if(visited[w]==0)
								{
									
										printf("%d",w);
										visited[w]=1;
										q_insert(q,&f,&r,w);
		    					}
		    			
		    	
		    	if(f==0)
		    			break;
		    	else
		    		u=q_delete(q,&f,&r);
		}
}
void q_insert(int *q,int*f,int*r,int y)
{
			
				if(*r==0)
				*f=*r=1;
		        else
		        *r=*r+1;
		        q[*r]=y;
		        //printf("no is inserted\n");
			 
}

int q_delete(int *q,int *f,int *r)
{
			int y;
			
				y=q[*f];
			  	if(*f==*r)
			  		*f=*r=0;
			  	else
			  		*f=*f+1;
			  	return y;
			  		
}