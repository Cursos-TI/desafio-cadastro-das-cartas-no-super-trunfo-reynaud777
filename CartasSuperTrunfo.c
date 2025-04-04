#include <stdio.h>

int main(){

    //tipos e variáveis
char estado1[20];
char estado2[20];
char cidade1, cidade2;
unsigned long int codigo1, codigo2;
int escolha1, escolha2;
float area1, area2;
float pib1, pib2;
int turismo1, turismo2;
unsigned long int habitantes1, habitantes2;
float pibpercapta1, pibpercapta2;
float densidade1, densidade2;
float superpoderA, superpoderB;
float soma1, soma2;
char continua;

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

printf("\nComparando as cartas\n\n");

    printf("Escolha um dos atributos da carta %c%lu para ser comparado:\n", cidade1, codigo1);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capta\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("Você escolheu o atributo: população.\n");
        break;
    case 2:
         printf("Você escolheu o atributo: área.\n");
         break;

    case 3:
         printf("Você escolheu o atributo: PIB.\n");
    break;

    case 4:
         printf("Você escolheu o atributo: Pontos turísticos.\n");
    break;

    case 5:
         printf("Você escolheu o atributo: Densidade Populacional.\n");
    break;

    case 6:
         printf("Você escolheu o atributo: PIB per Capita.\n");
    break;

    case 7:
         printf("Você escolheu o atributo: Super Poder.\n");
    break;

    default:
         printf("Opção inválida.\n");
        break;
    }

    printf("\nEscolha um dos atributos da carta %c%lu para ser comparado:\n", cidade2, codigo2);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capta\n");
    printf("7. Super Poder\n");
    printf("ATENÇÃO: Você deve estar escolhendo um atributo diferente do escolhido anteriormente.\n");
    scanf("%d", &escolha2);


    switch (escolha1)
    {
    case 1:
        printf("Carta %c%lu (%s) - População | ", cidade1, codigo1, estado1);
        escolha1 = habitantes1;
        break;
    
    case 2:
        printf("Carta %c%lu (%s) - Área | ", cidade1, codigo1, estado1);
        escolha1 = area1;
    break;
        
    case 3:
        printf("Carta %c%lu (%s) - PIB | ", cidade1, codigo1, estado1);
        escolha1 = pib1;
    break;

    case 4:
        printf("Carta %c%lu (%s) - Pontos Turísticos | ", cidade1, codigo1, estado1);
        escolha1 = turismo1;
    break;

    case 5:
        printf("Carta %c%lu (%s) - Densidade Populacional | ", cidade1, codigo1, estado1);
        escolha1 = densidade1;
    break;

    case 6:
        printf("Carta %c%lu (%s) - PIB per Capita | ", cidade1, codigo1, estado1);
        escolha1 = pibpercapta1;
    break;
    
    case 7:
        printf("Carta %c%lu (%s) - Super Poder | ", cidade1, codigo1, estado1);
        escolha1 = superpoderA;
    break;
    
    default:
        printf("Opção Inválida. Tente novamente.\n");
    break;

    }

    switch (escolha2)
    {
        case 1:
        printf("Carta %c%lu (%s) - População\n", cidade2, codigo2, estado2);
        escolha2 = habitantes2;
        break;
    
    case 2:
        printf("Carta %c%lu (%s) - Área\n", cidade2, codigo2, estado2);
        escolha2 = area2;
    break;
        
    case 3:
        printf("Carta %c%lu (%s) - PIB\n", cidade2, codigo2, estado2);
        escolha2 = pib2;
    break;

    case 4:
        printf("Carta %c%lu (%s) - Pontos Turísticos\n", cidade2, codigo2, estado2);
        escolha2 = turismo2;
    break;

    case 5:
        printf("Carta %c%lu (%s) - Densidade Populacional\n", cidade2, codigo2, estado2);
        escolha2 = densidade2;
    break;

    case 6:
        printf("Carta %c%lu (%s) - PIB per Capita\n", cidade2, codigo2, estado2);
        escolha2 = pibpercapta2;
    break;
    
    case 7:
        printf("Carta %c%lu (%s) - Super Poder\n", cidade2, codigo2, estado2);
        escolha2 = superpoderB;
    break;
    
    default:
        printf("Opção Inválida. Tente novamente.\n");
    break;

    }



}   