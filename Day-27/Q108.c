#include<stdio.h>

int main()
{
    char name[50];
    float m1,m2,m3,total,per;

    printf("Enter Student Name: ");
    scanf("%s",name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f%f%f",&m1,&m2,&m3);

    total=m1+m2+m3;
    per=total/3;

    printf("\n----- Marksheet -----\n");
    printf("Name       : %s\n",name);
    printf("Total      : %.2f\n",total);
    printf("Percentage : %.2f\n",per);

    if(per>=90)
        printf("Grade : A+\n");
    else if(per>=75)
        printf("Grade : A\n");
    else if(per>=60)
        printf("Grade : B\n");
    else if(per>=40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}   