#include <stdio.h>

int main() 
{
    double a, b;
    printf("Masukkan Nilai Pertama: "); 
    scanf("%lf", &a);
    printf("Masukkan Nilai Kedua: "); 
    scanf("%lf", &b);
    double result = a + b;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", a, b, result);
    return 0;
}