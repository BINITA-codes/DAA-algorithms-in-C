#include<stdio.h>
#include<stdlib.h>

/* Function prototypes */
void dijkstra(int cost[10][10], int n, int v, int dist[]);
int dmin(int dist[], int n, int s[]);

int main()
{
    int cost[10][10], dist[10];
    int n, v, i, j;

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    printf("Enter cost matrix (999 for infinity):\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&cost[i][j]);

    printf("Enter source vertex: ");
    scanf("%d",&v);

    dijkstra(cost,n,v,dist);

    printf("Shortest distances from vertex %d:\n",v);
    for(i=1;i<=n;i++)
        printf("%d -> %d = %d\n",v,i,dist[i]);

    return 0;
}

void dijkstra(int cost[10][10], int n, int v, int dist[])
{
    int i,u,w;
    int s[10];

    for(i=1;i<=n;i++)
    {
        s[i]=0;
        dist[i]=cost[v][i];
    }

    dist[v]=0;
    s[v]=1;

    for(i=1;i<=n-1;i++)
    {
        u=dmin(dist,n,s);
        s[u]=1;

        for(w=1;w<=n;w++)
        {
            if(cost[u][w]!=999)
            {
                if((s[w]!=1) && (dist[w] > dist[u] + cost[u][w]))
                    dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}

int dmin(int dist[], int n, int s[])
{
    int i=1,m,mdata,k;

    while(s[i]==1 && i<=n)
        i++;

    m=i;
    mdata=dist[i];

    for(k=i+1;k<=n;k++)
    {
        if((s[k]==0) && (dist[k] < mdata))
        {
            m=k;
            mdata=dist[k];
        }
    }

    return m;
}