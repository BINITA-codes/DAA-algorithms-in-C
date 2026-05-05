#include<stdio.h>
#include<stdlib.h>
void main()
{
        void read_ar(int a[],int n);
        void write_ar(int a[],int n);
        void jsd(int n,int d[],int j[],int *k);
        
        int n,d[20],j[20],k;
        
        printf("Enter the number of jobs:");
        scanf("%d",&n);
        printf("Enter the deadlines acc. to decreaing order of profit:");
        read_ar(d,n);
        
        jsd(n,d,j,&k);
      // sum =0;
      // for(i=0;i<n;i++)
       	//	sum=sum+j[p[i]];//
	    printf("The job sequence is:");
        write_ar(j,k);


}
void read_ar(int a[],int n)
{
        int i;
        for(i=1;i<=n;i++)
                scanf("%d",&a[i]);
        
}
void write_ar(int a[],int n)
{
        int i;
        for(i=1;i<=n;i++)
                printf("%d ",a[i]);
        
}
void jsd(int n,int d[],int j[],int *k)
{       
        int i,r,p;
        
        d[0]=j[0]=0;
        j[1]=1;
        *k=1;
        for(i=2;i<=n;i++)
        {
                r=*k;
                while( (d[j[r]]>d[i]) && (d[j[r]]!=r) )
                        r=r-1;
                if( (d[j[r]]<=d[i]) && (d[i]>r))
                {
                        for(p=*k;p>=r+1;p--)
                                j[p+1]=j[p];
                        j[r+1]=i;
                        (*k)++;
                }
                
        }
}



              