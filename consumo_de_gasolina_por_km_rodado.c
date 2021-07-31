#include <stdio.h>

/*Faca um programa em C que o usuário digite o numero de quilometros, a quantidade de litros de gasolina que o carro usou para rodar esse número de quilometros.
Em posse desses dois dados calcule o consumo em km/L que o carro tem. Esse programa deve rodar sem parar, nao ter fim.
*/

int main()
{
 float km, gas;

 while(km!='C')
 {

 printf("\nDigite a quantidade de km rodados: \n");
 scanf("%f",&km);

 printf("\nDigite a quantidade de gasolina consumida para percorrer a kilometragem: \n");
 scanf("%f",&gas);

 printf("\nA quantidade de km/L consumida no percuso foi = %f\n\n", km/gas);
 }


 return(0);
}
