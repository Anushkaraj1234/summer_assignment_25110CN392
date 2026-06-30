#include <stdio.h>

int main() {
    char name[50];
    float b, h, d, gross;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &b);

    h= b* 0.20;
    d= b * 0.10;
    gross = b + h+ d;

    printf("\nSalary Slip\n");
    printf("Employee: %s\n", name);
    printf("Basic Salary: %.2f\n", b);
    printf("HRA: %.2f\n", h);
    printf("DA: %.2f\n", d);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}