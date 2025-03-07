#include <stdio.h>;

int main(){

    char estado1[20];
    char estado2[20];
    char cidade1, cidade2;
    int codigo1, codigo2;
    unsigned long int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float pibpercapta1;
    float pibpercapta2;
    float densidade1;
    float densidade2;
    float superpoderA, superpoderB;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    printf("Desafio Super Trunfo!\n");
    
    printf("Qual será o nome do primeiro estado?\n");
    scanf("%s", &estado1);
    
    printf("Digite qual letra deve representar a cidade 1 do estado: %s\n", estado1);
    scanf(" %c", &cidade1);

    printf("Digite qual número irá compor o código da cidade 1:\n");
    scanf(" %d", &codigo1);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes1);
    
    printf("Qual será a área da carta %c%d?\n", cidade1, codigo1);
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib1);

    printf("Quantos pontos turísticos terá na cidade?\n");
    scanf("%d", &turismo1);

    printf("Qual será o nome do segundo estado?\n");
    scanf(" %s", &estado2);

    printf("Digite qual letra deve representar a cidade 1 do estado: %s\n", estado2);
    scanf(" %c", &cidade2);
    
    printf("Digite qual número irá compor o código da cidade 1:\n");
    scanf(" %d", &codigo2);

    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes2);
    
    printf("Qual será a área da carta %c%d?\n", cidade2, codigo2);
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos terá na cidade?\n");
    scanf("%d", &turismo2);

    pibpercapta1 = (float) pib1 / habitantes1;
    pibpercapta2 = (float) pib2 / habitantes2;

    densidade1 = (float) habitantes1 / area1;
    densidade2 = (float) habitantes2 / area2;

    superpoderA = (float) (habitantes1 + area1 + turismo1 + pibpercapta1) - densidade1;
    superpoderB = (float) (habitantes2 + area2 + turismo2 + pibpercapta2) - densidade2;

    printf("\n\n Cidade: %c\n", cidade1);
    printf("Código: %c%d\n", cidade1, codigo1);
    printf ("Nome da cidade: %s\n", estado1); 
    printf("População: %d\n", habitantes1); 
    printf("Área: %.2f\n", area1); 
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoderA);

    printf("\n\n Cidade: %c\n", cidade2);
    printf("Código: %c%d\n", cidade2, codigo2);
    printf ("Nome da cidade: %s\n", estado2); 
    printf("População: %d\n", habitantes2); 
    printf("Área: %.2f\n", area2); 
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n\n", superpoderB);










}