#include<stdio.h>
int main()
{
    int r,h;

    printf("Enter Radius of circle:");
    scanf("%d", &r);
    printf("Enter Hight of cylinder:");
    scanf("%d", &h);
      printf("Area of circle with radius %d is: %f\n", r, 3.14*r*r);
        printf("Volume of cylinder with radius %d and height %d is: %f", r,h, 3.14*r*r);
    return 0;
}