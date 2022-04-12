/*Crie um algorítmo que armazene dados de produtos a serem vendidos. O
usuário deve escolher quais produtos deseja comprar, no final deve mostrar o
ou os produtos escolhidos, além de mostrar seus valores e o preço final, o
pagamento e o troco. */
#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<string.h> 
int main(){
    int produto, op;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	float valor1 = 20, valor2 = 50 , valor3=35, valor4=120, valor5=25, valorfinal, valorf1, valorf2, valorf3, valorf4, valorf5;
    float forma_pag = 0, troco;
	setlocale(LC_ALL, "Portuguese");
    printf("Autor: Matheus Henrique, questão 4 - Loja.\n");
	printf("\nLOJA MATH\n");
	do{	
		printf("1 - Bola de Futebol (R$20,00)");
    	printf("\n2 - Camisa Esportiva Cinza (R$50,00)");
    	printf("\n3 - Copo Térmico (R$35,00)");
    	printf("\n4 - Relógio Smart (R$120,00)");
    	printf("\n5 - Estojo (R$25,00)");
		printf("\nQual produto deseja?:\n");
		 scanf("%d", &produto);
		switch(produto)
			{
			case 1:
			valorf1+=valor1;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 2 - Não)");
			 scanf("%d", &op);
			c1++;
			break;
			case 2:
			valorf2+=valor2;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 2 - Não)");
			 scanf("%d", &op);
			c2++;
			break;
			case 3:
			valorf3+=valor3;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 2 - Não)");
			 scanf("%d", &op);
			c3++;
			break;
			case 4:
			valorf4+=valor4;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 2 - Não)");
			 scanf("%d", &op);
			c4++;
			break;		
			case 5:
			valorf5+=valor5;
			printf("Deseja continuar escolhendo produtos? (1 - Sim, 2 - Não)");
			 scanf("%d", &op);
			c5++;
			break;
			default:
			printf("Opçao invalida. Digite 1 para voltar.\n");
			scanf("%d", &op);
			break;
			 }
	}while(op==1);
		
		valorfinal=valorf1+valorf2+valorf3+valorf4+valorf5;
		printf("\nProdutos escolhidos:");
		if(valorf1 > 1){
		printf("\nBola de Futebol (R$20,00)");
		printf("\nQuantidade: %d", c1);
		}
		if(valorf2 > 1){
		printf("\nCamisa Esportiva Cinza (R$50,00)");
		printf("\nQuantidade: %d", c2);		
		}
		if(valorf3 > 1){
		printf("\nCopo Térmico (R$35,00)");
		printf("\nQuantidade: %d", c3);	
		}
		if(valorf4 > 1){
		printf("\nRelógio Smart (R$120,00)");
		printf("\nQuantidade: %d", c4);	
		}
		if(valorf5 > 1){
		printf("\nEstojo (R$25,00)");
		printf("\nQuantidade: %d", c5);	
		}
		printf("\n\nValor final da compra: R$%.2f", valorfinal);	
		printf("\n\nQual o valor em dinheiro que você irá pagar?: ");
		 scanf("%f", &forma_pag);
		if(forma_pag<valorfinal)
		printf("\nValor insuficiente para a compra! Reinicie o programa e tente novamente.");
		else{
		troco = forma_pag - valorfinal;
		printf("\nPagamento realizado! Troco: R$%.2f", troco);
		}
		return 0;
}
