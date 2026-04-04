#include<stdio.h>
int main()
{
    float c;
    printf("Enter Celsius:");
    scanf("%f", &c);
        printf("Celsius to Fahrenheit: %.8f", (9.00/5.00)*c+32);
    return 0;
}