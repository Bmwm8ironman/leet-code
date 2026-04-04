#include<stdio.h>
int main()
{
    int r,t;
    float p;

    printf("ENTER P:");
    scanf("%f", &p);
    printf("ENTER R:");
    scanf("%d", &r);
    printf("ENTER TIME:");
    scanf("%d", &t);
    
    printf("TOTAL INTREST CALCULATED IS: %f", (p*r*t)/100);

    return 0;
}