#include <stdio.h>
int main (){
//dados das cartas
char estado1;
char estado2;
char codigo1[10];
char codigo2[10];
int populacao1;
int populacao2;
char nomedacidade1[20];
char nomedacidade2[20];
float area1;
float area2;
float pib1;
float pib2;
int pontosturisticos1;
int pontosturisticos2;

//entrada de dados da primeira carta

printf("Escolha uma letra de A a H para ser o Estado. \n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Escolha 1 número de 01 a 04 para ser o código da carta. \n");
printf("Código: ");
scanf(" %2s", codigo1);

printf("Insira a quantidade de habitantes da cidade\n");
printf("População: ");
scanf(" %d", &populacao1);

printf("Escreva o nome da cidade. \n");
printf("Nome da cidade: ");
getchar();
fgets(nomedacidade1, sizeof(nomedacidade1), stdin);

printf("Insira a área territorial da cidade. \n");
printf("Área em km²: ");
scanf(" %f", &area1);

printf("Insira o PIB da cidade, \n");
printf("PIB: ");
scanf("%f", &pib1);

printf("Insira a quantidade de pontos turísticos da cidade. \n"); 
printf("Pontos turísticos: ");
scanf(" %d", &pontosturisticos1);






}



