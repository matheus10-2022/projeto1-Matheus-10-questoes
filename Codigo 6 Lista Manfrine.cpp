/*Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: 
[0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar quando for lido um número negativo*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main(){
	int n1 = 0, cont = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, questão 6 - Contagem.\n");
	do{
	printf("Digite algum número(Para sair digite qualquer número negativo.): ");
	 scanf("%d", &n1);
	 cont++;
	if(n1>=0 && n1<=25)
		cont1++;
	else if(n1>=26 && n1<=50)
		cont2++;
	else if(n1>=51 && n1<=75)
		cont3++;
	else if(n1>=76 && n1<=100)
		cont4++;
	cont5++;
	}while(n1>0);
	printf("\n%d número(s) estão no intervalo de 0 a 25.\n", cont1);
	printf("\n%d número(s) estão no intervalo de 26 a 50.\n", cont2);
	printf("\n%d número(s) estão no intervalo de 51 a 75.\n", cont3);
	printf("\n%d número(s) estão no intervalo de 76 a 100.\n", cont4);	
	return 0;
}
