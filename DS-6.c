#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int i,a[10],max,n,DAT[10];
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    DAT[max+1]=0
    ;
    for(i=0;i<n-1;i++)
    {
        DAT[a[i]]++;
    }
    for(i=0;i<max+1;i++)
    {
        if(DAT[i]!=0)
        {
            printf("i occurred DAT[i] times ");
        }
    }
}
