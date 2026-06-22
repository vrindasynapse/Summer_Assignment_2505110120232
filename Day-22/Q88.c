#include<stdio.h>

int main()
{
    char str[100];
    int i=0,j=0;

    printf("Enter sentence: ");
    fgets(str,100,stdin);

    while(str[i]!='\0')
    {
        if(str[i]!=' ' && str[i]!='\n')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }

    str[j]='\0';

    printf("%s",str);

    return 0;
}   