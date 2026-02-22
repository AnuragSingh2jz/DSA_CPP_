#include <stdio.h>

int main()
{
    int a[100];
    int temp;
    int n;
    printf("enter the no of element you want in array:");
    scanf("%d",&n);
    printf("enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("reverse arrays are :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
