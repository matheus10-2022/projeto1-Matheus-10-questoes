/*Faça um algoritmo para mostra os múltiplos de 3 contidos de 1 a 100; (while)*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n1 = 0, ndiv3 = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, questão 7 - Múltiplos de 3.\n");
	while(n1<=100){
	n1++;
	if(n1%3 == 0)
	printf("\n%d", n1);
}
	return 0;
}
