#include <stdio.h>

int main(){

    //tipos e variáveis
char estado1[20];
char estado2[20];
char cidade1, cidade2;
unsigned long int codigo1, codigo2;
float area1, area2;
float pib1, pib2;
int turismo1, turismo2;
unsigned long int habitantes1, habitantes2;
float pibpercapta1, pibpercapta2;
float densidade1, densidade2;
float superpoderA, superpoderB;
int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

//scanf = entrada de dados / interacao com o usuario
//printf = saída de dados

printf("***Desafio Super Trunfo!***\n\n");

printf("Qual será o nome do primeiro Estado?\n");
scanf(" %s", &estado1[0]);

printf("Qual letra deve representar a cidade 1 do primeiro Estado?\n");
scanf(" %c", &cidade1);

printf("Digite qual número irá compor o código da carta da cidade 1\n");
scanf("%lu", &codigo1);

printf("Digite o número de habitantes:\n");
scanf("%lu", &habitantes1);

printf("Qual será a área da carta %c%lu?\n", cidade1, codigo1);
scanf("%f", &area1);

printf("Digite o PIB:\n");
scanf("%f", &pib1);

printf("Quantos pontos turisticos terá na cidade?\n");
scanf("%d", &turismo1);

printf("Qual será o nome do segundo Estado?\n");
scanf("%s", &estado2[0]);

printf("Qual letra deve representar a cidade 1 do segundo Estado?\n");
scanf(" %c", &cidade2);

printf("Digite qual número irá compor o código da carta da cidade 1\n");
scanf("%lu", &codigo2);

printf("Digite o número de habitantes:\n");
scanf("%lu", &habitantes2);

printf("Qual será a área da carta %c%lu?\n", cidade2, codigo2);
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &pib2);

printf("Quantos pontos turisticos terá na cidade?\n");
scanf("%d", &turismo2);

//calculo do pibpercapta
pibpercapta1 = (float) pib1 / habitantes1;
pibpercapta2 = (float) pib2 / habitantes2;

//calculo da densidade populacional
densidade1 = (float) habitantes1 / area1;
densidade2 = (float) habitantes2 / area2;

//calculo do superpoder
superpoderA = (float) (habitantes1 + area1 + turismo1 + pibpercapta1) - densidade1;
superpoderB = (float) (habitantes2 + area2 + turismo2 + pibpercapta2) - densidade2;

//visualizacao dos dados da cartas
printf("\n\n Cidade: %c\n", cidade1);
    printf("Código: %c%lu\n", cidade1, codigo1);
    printf ("Nome da cidade: %s\n", estado1); 
    printf("População: %lu\n", habitantes1); 
    printf("Área: %.2f\n", area1); 
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoderA);

    printf("\n\n Cidade: %c\n", cidade2);
    printf("Código: %c%lu\n", cidade2, codigo2);
    printf ("Nome da cidade: %s\n", estado2); 
    printf("População: %lu\n", habitantes2); 
    printf("Área: %.2f\n", area2); 
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n\n", superpoderB);

    //operadores relacionais
    //1 = verdadeiro / 0 = falso
    //maior vence, exceto densidade
    resultado1 = habitantes1 > habitantes2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = turismo1 > turismo2;
    resultado5 = densidade1 < densidade2;
    resultado6 = pibpercapta1 > pibpercapta2;
    resultado7 = superpoderA > superpoderB;

    printf("***Comparando as cartas***\n");
    printf("1 = verdade, 0 = falso\n\n");

    printf("População - %c%lu é maior que %c%lu? %d\n", cidade1, codigo1, cidade2, codigo2, resultado1);
    printf("Área - %c%lu é maior que %c%lu? %d\n", cidade1, codigo1, cidade2, codigo2,resultado2);
    printf("PIB - %c%lu é maior que %c%lu? %d\n", cidade1, codigo1, cidade2, codigo2, resultado3);
    printf("Turismo - %c%lu é maior que %c%lu? %d\n", cidade1, codigo1, cidade2, codigo2, resultado4);
    printf("Densidade Populacional - %c%lu é menor que %c%lu? %d\n", cidade1, codigo1, cidade2, codigo2, resultado5);
    printf("PIB per Capita - %c%lu é maior que %c%lu? %d\n" , cidade1, codigo1, cidade2, codigo2, resultado6);




}   