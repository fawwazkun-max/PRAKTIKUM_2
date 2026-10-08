#include <stdio.h>

int main() 
{
    double radius, height;
    scanf("%lf %lf", &radius, &height);
    
    double pi = 22.0 / 7.0;
    double volume = pi * radius * radius * height;
    double area = 2 * pi * radius * (radius + height);
    double circumference = 2 * pi * radius;
    
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", area);
    printf("Keliling = %.2f\n", circumference);
    return 0;
}