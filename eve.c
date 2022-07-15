/*
GITONGA`S FACTORY
Created by everline oremo
ON JULY 11TH 2022
C89
LICENCE MIT
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   int totalhoursworked = 4;
    int krapin, employmentNO, hoursworked,normalpay,overtimepay, taxpaid, netincome;
    char name[100];

    printf("welcome to Gitona`s factory\n");

    printf("Enter your name:");
    scanf("%d", &name);

    printf("Enter your employee number:");
    scanf("%d", &employment);

    printf("Enter your kra pin: ");
    scanf("%d", &krapin);

    printf("Enter number of hours worked: ");
    scanf("%d", hoursworked);


    normalpay = 1000 * totalhoursworked;
    overtimepay = (hoursworked - totalhoursworked) * 1500;
    taxpaid = normalpay 30/100;
    netincome = (normalpay - taxpaid) +overtimepad;

    printf("normalpay: %d\n", normalpay);
    printf("overtimepay: %d\n", overtimepay);
    printf("taxpaid: %d\n", taxpaid);
    printf("netincome: %d\n", netincome);

    return 0;
}
