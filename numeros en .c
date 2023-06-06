#include <stdio.h>

int main()
{
    int num, digito1, digito2, digito3, digito4, digito5;

    printf("Introduzca un numero de cinco digitos: ");
    scanf("%d", &num);

    // Separar el número en sus dígitos individuales
    digito1 = num / 10000;
    digito2 = (num % 10000) / 1000;
    digito3 = (num % 1000) / 100;
    digito4 = (num % 100) / 10;
    digito5 = num % 10;

    // Mostrar los dígitos separados por tres espacios cada uno
    printf("%d   %d   %d   %d   %d", digito1, digito2, digito3, digito4, digito5);

    return 0;
}
