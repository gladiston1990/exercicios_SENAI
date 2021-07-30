/*conversor de decimal para octal e hexadecimal */

#include <stdio.h>

int main()
{
    int a;

    printf("Digite o valor Decimal a ser convertido: ");
    scanf("%d",&a);

    printf("O valor de %d foi convertido em octal: %o\n\n",a,a);
    printf("O valor de %d foi convertido em hexadecimal %X\n\n",a,a);
}
