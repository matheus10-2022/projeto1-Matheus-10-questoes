/*Desenvolver um algoritmo que efetue a soma de todos os 
n�meros �mpares que s�o m�ltiplos de seis e que se encontram no conjunto dos n�meros de 15 at� 250*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n1 = 0;
	float soma_imp = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, quest�o 9 - �mpares m�ltiplos de 6.\n");
	for(int n1; n1<=250; n1++){
	if (n1%2 != 0 && n1%6 == 0 && n1>=15 && n1<=250)
	soma_imp+=n1;
}
	printf("\nSoma dos n�meros �mpares, dos n�meros m�ltiplos de 6, entre 15 e 250: %.2f", soma_imp);
	return 0;
}
