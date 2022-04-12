/*Crie um algor�tmo que aplique pelo menos 2 fun��es e 1 procedimento criado
por voc�. */
#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<math.h>
float formula(float altura, float largura, float gramatura){ //Fun��o
	float peso_mil;
	peso_mil = (largura*altura*gramatura)/10;
	return(peso_mil);
}
float valor(float peso_mil, float fator){ //Fun��o
	float valor_mil;
	valor_mil = (peso_mil*fator);
	return(valor_mil);
}
void mostrar_valor(float valor_mil){ //Procedimento

	printf("\nValor do milheiro: R$%.2f ", valor_mil);

}
int main(){
	
	float alt, larg, gram, peso_mil, valor_mil, fator = 0;
	int op;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, quest�o 10 - Livre.\n");
	do{
	printf("\n----- SACOLAS -----\n");
	printf("\nDigite a largura da sacola(em cm): ");
	 scanf("%f", &larg);
	printf("\nDigite a altura(em cm): ");
	 scanf("%f", &alt);
	printf("\nDigite a gramatura(em Kg): ");
	 scanf("%f", &gram);
	printf("\nDigite o fator: ");
	 scanf("%f", &fator);
	peso_mil = formula(larg, alt, gram);
	valor_mil = valor(peso_mil, fator);
	mostrar_valor(valor_mil);
	printf("\n\nDeseja fazer outra opera��o? (1 - SIM, 2 - N�O): ");
	 scanf("%d", &op);
	}while(op==1);
	if(op==2){
		printf("\n\nPrograma encerrado.");
	}
	return 0;
}
