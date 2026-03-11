#include<stdio.h>

void display(int a[], int i, int n)
    if(i==n)
        return;

    printf("%d ",a[i]);
    display(a,i+1,n);
}

void reverse(int a[], int i)
{
    if(i<0)
        return;

    printf("%d ",a[i]);
    reverse(a,i-1);
}

int main()
{
    int a[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Display elements:\n");
    display(a,0,n);

    printf("\nReverse display:\n");
    reverse(a,n-1);

    return 0;
}
