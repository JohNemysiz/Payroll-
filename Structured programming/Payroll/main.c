/*
Payroll
created by DIT-01-0432/2022
July 2022
C89 compiler
MIT license
*/

#include <stdio.h>
int main(){
    int totalhoursWorked = 40;
    int krapin, employeeNo, hoursWorked, norminalPay,overtimePay, taxPaid, netIncome;
    char name(100);

    printf("\t WELCOME TO GITONGA's FACTORY\n");

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your employee number: ");
    scanf("%d", &employentNo);

    printf("Enter your KRA pin: ");
    scanf("%d", &krapin);

    printf("Enter Number of hours worked");
    scanf("%d", &hoursworked);

    norminalPay = 1000 * totalhoursWorked;
    overtime = (hoursWorked - totalhours Worked) * 1500;
    taxpaid = normalPay * 30/100;
    netIncome = (normalPay - taxpaid) + overtimePay;

    printf("normalPay: %d\n", normalpay);
    printf("overtimePay: %d\n", overtimePay);
    printf("taxPaid: %d\n", taxpaid);
    printf("netIncome: %d\n", netIncome);

    return 0;
}
