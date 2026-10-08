#include <stdio.h>
#include <math.h>

int main() 
{
    int sideA, sideB;
    scanf("%d %d", &sideA, &sideB);
    int height = (sideA < sideB) ? sideA : sideB;
    int hypotenuse = (sideA > sideB) ? sideA : sideB;
    int base = sqrt((hypotenuse * hypotenuse) - (height * height));
    int around = base + height + hypotenuse;
    int area = (base * height) / 2;
    
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("Keliling = %d cm\n", around);
    printf("Luas = %d cm^2\n", area);
    return 0;
}