#include<stdio.h>

int main()
{
    char str[100],temp;
    int i=0,j=0,flag=1;

    printf("Enter string: ");
    scanf("%s",str);

    while(str[j]!='\0')
        j++;

    j--;

    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }

        i++;
        j--;
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}     