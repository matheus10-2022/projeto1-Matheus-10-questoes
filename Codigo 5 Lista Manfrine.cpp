/*Ao escalar uma parede a aranha escala 20 cm de manhã e a noite ela desce 11 cm, 
em quantos dias a aranha chega ao topo de 18 metros de altura.*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
float totaldia(float esc_manha, float esc_noite){
	float esc_dia;
	esc_dia = (esc_manha - esc_noite);
	return(esc_dia);
}
float diasf(float altura, float esc_dia){
	return (altura*100)/esc_dia;
}
int main(){
	float manha, noite, dias = 0, dia, altura, esc_diat;
	setlocale(LC_ALL, "Portuguese");
	printf("Autor: Matheus Henrique, questão 5 - Aranha.\n");
	printf("\nDigite a altura do prédio(em metros): ");
	 scanf("%f", &altura);
	printf("Digite quantos cm a aranha escala de manhã: ");
	 scanf("%f", &manha);
	printf("Digite quantos cm a aranha desce de noite: ");
	 scanf("%f", &noite);
	esc_diat = totaldia(manha, noite);
	dias = diasf(altura, esc_diat);
	printf("\n\nA aranha irá subir o prédio em %.0f dias.", dias);
	return 0;
}
