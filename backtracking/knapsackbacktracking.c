#include<stdio.h>
#include<conio.h>
int p[20],w[20],x[20],y[20],n,m,fp,fw,i;

void aread(int *q,int n)
{		
		for(i=1;i<=n;i++)
		{
			scanf("%d",&q[i]);
		}
}
void awrite(int *x, int n)
{
		printf("the answer is : ");
		for(i=1;i<=n;i++)
		{
				printf("%d",x[i]);
		}
}
int bound(int k,int cp,int cw)
{
		int b,c;
		b=cp;
		c=cw;
		for(i=k+1;i<=n;i++)
			if(c+w[i]<m)
			{
					c=c+w[i];
					b=b+p[i];
			}
			else
			{
					b=b+(m-c)/w[i]*p[i];
					break;
			}
		return b;	
}
int bknap(int k,int cp,int cw)
{
		if(cw+w[k]<=m)
		{
				y[k]=1;
				if(k<n)
					bknap(k+1,cp+p[k],cw+w[k]);
		
				if((k==n)&&(cp+p[k]>fp))
				{
						fp=cp+p[k];
						fw=cw+w[k];
						for(i=1;i<=n;i++)
							x[i]=y[i];
				}
		}
		if(bound(k,cp,cw)>=fp)
		{	
			y[k]=0;
			if(k<n)
				bknap(k+1,cp,cw);
			if((k==n)&&(cp>fp))
			{
					fp=cp;
					fw=cw;
					for(i=1;i<=n;i++)
						x[i]=y[i];
			}	
		}
}
void main()
{
		fp=-1;
		printf("enter the no of objects: ");
		scanf("%d",&n);
		printf("enter the profit:");
		aread(p,n);
		printf("enter the weights:");
		aread(w,n);
		printf("enter the bag capacity: ");
		scanf("%d",&m);
		bknap(1,0,0);
		awrite(x,n);
}