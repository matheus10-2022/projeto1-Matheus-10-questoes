/*Fa�a um algoritmo que receba v�rios n�meros e mostre a quantidade de n�meros maiores que 5; (do while)*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n1 = 0, cont = 0, quant = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, quest�o 8 - Maior que 5.\n");
	do{
	printf("Digite um n�mero: ");
	 scanf("%d", &n1);
	cont++;
	if(n1>5)
	quant++;
	}while(cont<10);
	printf("\nN�mero maiores que 5: %d", quant);
	return 0;
}
