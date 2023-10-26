#include<stdio.h>
#include<math.h>
int main()
{
int i,pos,a[10],ele;
printf("Enter the new element:");
scanf("%d",&ele);
for(i=n-1;i>=pos;i--)
{
    a[i+1]=a[i];
}
a[pos]=ele;
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}
