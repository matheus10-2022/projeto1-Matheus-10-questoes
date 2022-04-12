#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<math.h> 
int main(){
	float peso, altura, imc;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, questão 1 - IMC.\n");
	printf("\nDigite sua altura: ");
	 scanf("%f", &altura);
	printf("Digite seu peso: ");
	 scanf("%f", &peso);
	imc = peso/(altura*altura);
	printf("IMC = %.2f", imc);
	if(imc<=18.5)
		printf("\nEstá abaixo do peso.");
	if(imc>18.5 && imc<=25)
		printf("\nPeso normal.");
	if(imc>25 && imc<=30)
		printf("\nAcima do peso.");
	if(imc>30)
		printf("\nObeso.");
	return 0;
}
