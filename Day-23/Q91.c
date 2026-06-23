#include<stdio.h>

int main()
{
    char s1[100],s2[100];
    int i,j,temp;

    printf("Enter first string: ");
    scanf("%s",s1);

    printf("Enter second string: ");
    scanf("%s",s2);

    for(i=0;s1[i]!='\0';i++)
    {
        for(j=i+1;s1[j]!='\0';j++)
        {
            if(s1[i]>s1[j])
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }

            if(s2[i]>s2[j])
            {
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
            }
        }
    }

    i=0;

    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            printf("Not Anagram");
            return 0;
        }

        i++;
    }

    printf("Anagram");

    return 0;
}    