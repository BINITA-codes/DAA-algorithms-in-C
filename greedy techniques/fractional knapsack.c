#include<stdio.h>
#include<stdlib.h>

void main()
{
		int p[20],w[20],m,n,i;
		float x[20],tp;
		
	    void knap(int n,int m, int *p,int *w, float *x, float *tp);
        void readarr(int a[],int n);
        printf("Enter the number of objects");
        scanf("%d",&n);
        printf("Enter the weitht   ");
		readarr(w,n);
		printf("Enter the profit  ");
		readarr(p,n);
		printf("enter the capacity  ");
		scanf("%d",&m);
		knap(n,m,p,w,x,&tp);
		printf("Sol vector is ");
		
		for(i=1; i<=n; i++)
				printf("%f ",x[i] );
		printf("Total profit %.2f", tp);

}

void readarr(int a[],int n)
{
        int i;
        for(i=1;i<=n;i++)
			  scanf("%d",&a[i]);
}

void knap(int n,int m, int *p,int *w, float *x, float *tp)
{
		float u;
		int i;
		for(i=1;i<n;i++)
			x[i]=0;
			
		u=m;
		*tp=0;
    	
    	for(i=1;i<=n;i++)
    		if(w[i]<=u)
    		{
    				x[i]=1;
    				*tp=*tp+p[i];
    				u=u-w[i];
			}
			else
			 		break;
		
		if(i<=n)
		{
					x[i]=u/w[i];
					*tp=*tp+x[i] * p[i];
		}
}