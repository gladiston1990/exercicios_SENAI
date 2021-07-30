#include <stdio.h>

/*Convertendo valores de metro para decimentros, centimetros e milimetros*/

void main() {
    float metros, dec, cen, mili;
    printf("Digite o valor em metros a ser convertido: ");
    scanf ("%f",&metros);

    dec = metros * 10;
    cen = metros * 100;
    mili = metros * 1000;


    printf("\nO valor em metros convertido em decimentos e = %2.f\n", dec);
    printf("\nO valor em metros convertido em centimentos e = %2.f\n", cen);
    printf("\nO valor em metros convertido em milimentos e = %2.f\n", mili);


}



