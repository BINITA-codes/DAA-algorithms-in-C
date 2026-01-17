//Insertion Sort
//Design and Analysis of Algorithms(DAA)
//time Complexity
//Best Case:O(n)
//Average Case: O(n^2)
//Worst case:O(n^2)
//Space Complexity:O(1)
#include<stdio.h>
#include<stdlib.h>

int main()
{
        // Function Prototypes
        void readar (int *a,int *n);
        void insertionSort(int *a, int n);
        void writear(int *a,int n);
        
        int a[20], n;
        
        readar(a, &n);
        insertionSort(a, n);
        writear(a, n);
}

void readar (int *a, int *n)
{
        int i;
        printf("enter size: ");
        scanf("%d", n);
        printf("enter elements: ");
        for(i=1; i<=*n; i++)
            scanf("%d", &a[i]);
}

void insertionSort(int *a, int n)
{
    int i, j, key;
    // Start from the second element (index 2) up to n
    for(i=2; i<=n; i++) 
    {
        key = a[i];  // The element to be inserted
        j = i - 1;

        // Move elements of a[1..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 1 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key; // Insert the key at the correct position
    }
}

void writear(int *a, int n)
{
        int i;
        printf("\nSorted Array: ");
        for(i=1; i<=n; i++)
            printf("%d\t", a[i]);
        printf("\n");
}
