/*Faça um algoritmo que receba vários números e mostre a quantidade de números maiores que 5; (do while)*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n1 = 0, cont = 0, quant = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, questão 8 - Maior que 5.\n");
	do{
	printf("Digite um número: ");
	 scanf("%d", &n1);
	cont++;
	if(n1>5)
	quant++;
	}while(cont<10);
	printf("\nNúmero maiores que 5: %d", quant);
	return 0;
}
