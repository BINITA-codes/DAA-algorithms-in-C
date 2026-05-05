#include<stdio.h>
#include<conio.h>
int w[20],n,x[20],m;
void main()
{
	void sos(int s,int k,int r);
		int sum;
		int i;
		
		printf("enter no of weights");
		scanf("%d",&n);
		printf("Enter no of positive numbers in ascending order\n");
		for(i=1;i<=n;i++)
			scanf("%d",&w[i]);
		printf("Enter the total weight: ");
		scanf("%d",&m);
		sum=0;
		for(i=1;i<=n;i++)
			sum=sum+w[i];
		sos(0,1,sum);		
			
}
void sos(int s,int k,int r)
{
		int j;
	
		x[k]=1;
		if(s+w[k]==m)
		{
				for(j=1;j<=k;j++)
						printf("%d  ",x[j]);
				printf("\n");
    	}
    	else 
    		if(s+w[k]+w[k+1]<=m)
    				sos(s+w[k],k+1,r-w[k]);
    	
		if((s+r-w[k]>=m)&&(s+w[k+1]<=m))
		{
				x[k]=0;
				sos(s,k+1,r-w[k]);
		}	
}