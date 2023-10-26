#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0,n,a[10],i,m;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    m=n*(n+1)/2-sum;
    printf("Missing element is %d",m);




}
