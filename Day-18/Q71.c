#include<stdio.h>

int main()
{
    int a[100],n,i,key;
    int low=0,mid,high,found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            found=1;
            break;
        }
        else if(key>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}    