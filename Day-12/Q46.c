#include<stdio.h>
#include<math.h>

int armstrong(int n)
{
    int temp=n,count=0,sum=0,digit;

    while(temp>0)
    {
        count++;
        temp=temp/10;
    }

    temp=n;

    while(temp>0)
    {
        digit=temp%10;
        sum=sum+pow(digit,count);
        temp=temp/10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}   