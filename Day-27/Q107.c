#include<stdio.h>

int main()
{
    char name[50];
    float basic,hra,da,total;

    printf("Enter Employee Name: ");
    scanf("%s",name);

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    hra=0.20*basic;
    da=0.10*basic;
    total=basic+hra+da;

    printf("\n----- Salary Slip -----\n");
    printf("Employee : %s\n",name);
    printf("Basic    : %.2f\n",basic);
    printf("HRA      : %.2f\n",hra);
    printf("DA       : %.2f\n",da);
    printf("Total    : %.2f\n",total);

    return 0;
}   