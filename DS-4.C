#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[10],i,j,del;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be deleted:\n");
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;
        }
    }
    printf("Updated array is\n:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
