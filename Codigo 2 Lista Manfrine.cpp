#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
    char sigla[2];
	setlocale(LC_ALL, "Portuguese");
    printf("Autor: Matheus Henrique, questão 2 - Estados.\n");
	printf("\nDigite a sigla de um Estado: \n");
    scanf("%s",&sigla);
    if (!stricmp(sigla,"AC"))
       printf("\nEstado: ACREANO\n");
    else if (! stricmp(sigla,"AM"))
         printf("\nEstado: AMAZONENSE\n");
	else if (! stricmp(sigla,"AL"))
         printf("\nEstado: ALAGOANO\n");
    else if (! stricmp(sigla,"AP"))
         printf("\nEstado: AMAPAENSE\n");
    else if (! stricmp(sigla,"BA"))
         printf("\nEstado: BAIANO\n");
     else if (! stricmp(sigla,"DF"))
         printf("\nEstado: BRASILIENSE\n");
	else if (! stricmp(sigla,"CE"))
         printf("\nEstado: CEARENSE\n");
    else if (! stricmp(sigla,"GO"))
         printf("\nEstado: GOIANO\n");
    else if (! stricmp(sigla,"MA"))
         printf("\nEstado: MARANHENSE\n");
    else if (! stricmp(sigla,"MT"))
         printf("\nEstado: MATO-GROSSENSE\n");
    else if (! stricmp(sigla,"ES"))
         printf("\nEstado: CAPIXABA OU ESPIRITO-SANTENSE\n");
	else if (! stricmp(sigla,"MS"))
         printf("\nEstado: MATO-GROSSENSE-DO-SUL OU SUL-MATO-GROSSENSE\n");
    else if (! stricmp(sigla,"MG"))
         printf("\nEstado: MATO-GROSSENSE\n");
    else if (! stricmp(sigla,"PA"))
         printf("\nEstado: PARAENSE\n");
    else if (! stricmp(sigla,"PB"))
         printf("\nEstado: PARAIBANO\n");
    else if (! stricmp(sigla,"PR"))
         printf("\nEstado: PARANAENSE\n");
    else if (! stricmp(sigla,"PE"))
         printf("\nEstado: PERNAMBUCANO\n");
    else if (! stricmp(sigla,"PI"))
         printf("\nEstado: PIAUIENSE\n");
    else if (! stricmp(sigla,"RJ"))
         printf("\nEstado: CARIOCA\n");
    else if (! stricmp(sigla,"RN"))
         printf("\nEstado: POTIGUAR\n");
    else if (! stricmp(sigla,"RS"))
         printf("\nEstado: GAUCHO OU RIO-GRANDENSE-DO-SUL\n");
    else if (! stricmp(sigla,"RO"))
         printf("\nEstado: RONDONIANO\n");
    else if (! stricmp(sigla,"RR"))
         printf("\nEstado: RORAIMENSE\n");
    else if (! stricmp(sigla,"SC"))
         printf("\nEstado: CATARINENSE\n");
    else if (! stricmp(sigla,"SP"))
         printf("\nEstado: PAULISTA\n");
    else if (! stricmp(sigla,"SE"))
         printf("\nEstado: SERGIPANO OU SERGIPENSE\n");
    else if (! stricmp(sigla,"TO"))
         printf("\nEstado: TOCANTINENSE\n");
    else
         printf("\nA sigla não existe! Encerrando programa...\n");
	return 0;
}
