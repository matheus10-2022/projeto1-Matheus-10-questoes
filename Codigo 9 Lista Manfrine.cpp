/*Desenvolver um algoritmo que efetue a soma de todos os 
números ímpares que são múltiplos de seis e que se encontram no conjunto dos números de 15 até 250*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n1 = 0;
	float soma_imp = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, questão 9 - Ímpares múltiplos de 6.\n");
	for(int n1; n1<=250; n1++){
	if (n1%2 != 0 && n1%6 == 0 && n1>=15 && n1<=250)
	soma_imp+=n1;
}
	printf("\nSoma dos números ímpares, dos números múltiplos de 6, entre 15 e 250: %.2f", soma_imp);
	return 0;
}
