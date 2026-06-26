#include<stdio.h>

int main()
{
    int ans,score=0;

    printf("----- QUIZ -----\n");

    printf("\n1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("\n2. C Language was developed by?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    scanf("%d",&ans);

    if(ans==3)
        score++;

    printf("\nFinal Score = %d/3\n",score);

    return 0;
}    