#include <stdio.h>
	
int main(){

int numero1,numero2;

printf("introduzca dos numeros enteros\n");
scanf("%d%d", &numero1, &numero2);

	if ( numero1 == numero2 ) {
		printf("%d es igual a %d\n", numero1,numero2);
	} if ( numero1 != numero2 ) {
		printf("%d no es ugual a %d\n", numero1,numero2);
	} if ( numero1 < numero2 ) {
		printf("%d es menor que %d\n", numero1,numero2);
	} if ( numero1 > numero2 ) {
		printf("%d es mayor que %d \n", numero1,numero2);
	} if ( numero1 <= numero2 ) {
		printf("%d es menor o igual que %d \n", numero1,numero2);
	} if ( numero1 >= numero2 ) {
		printf("%d es mayor o igual que %d \n",numero1,numero2);
	}
	return 0;	
}
