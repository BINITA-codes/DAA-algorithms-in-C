//heapsort descending MIN HEAP

void main()
{		void readar(int *a,int *n);
		void heapsort(int *a,int n);
		void writear(int *a,int n);
		int a[20],n;
		readar(a,&n);
		heapsort(a,n);
		writear(a,n);
}

void readar(int *a,int *n)
{
		int i;
		printf("enter size");
		scanf("%d",n);
		printf("enter elements:");
		for(i=1; i<=*n; i++)
	   		scanf("%d",&a[i]);
}
void heapsort(int *a,int n)
{
		int t,i;
		heapify(a,n);
		for(i=n;i>=2;i--)
		{
			t=a[i];
			a[i]=a[1];
			a[1]=t;
			adjust(a,1,i-1);
		
		}
}

void heapify(int a,int n)
{
		int i;
		for(i=n/2;i>=1;i--)
			adjust(a, i, n);
}

void adjust(int*a,int i,int n)
{
		int x,j;
		x=a[i];
		j=2*i;
		while(j<=n)
		{
			if(j<n)
				if(a[j]>a[j+1])
					j=j+1;
			if(a[j]<x)
			{
				a[j/2]=a[j];
				j=2*j;
			}
			else
				break;
		}
		a[j/2]=x;
}


void writear(int *a,int n)
{
		int i;
		for(i=1; i<=n; i++)
			printf("%d\t",a[i]);
}

