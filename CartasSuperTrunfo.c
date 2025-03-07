#include <stdio.h>

int main() {

    
    #include <stdio.h>

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

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf(" \nCarta A1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta A2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta A3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta A4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes1, area1, pib1, turismo2, habitantes2, area2, pib2, turismo2, habitantes3, area3, pib3, turismo3, habitantes4, area4, pib4, turismo4);
    printf("\n\n\nCarta B1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta B2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta B3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta B4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes5, area5, pib5, turismo5, habitantes6, area6, pib6, turismo6, habitantes7, area7, pib7, turismo7, habitantes8, area8, pib8, turismo8);
    printf("\n\n\nCarta C1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta C2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta C3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta C4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes9, area9, pib9, turismo9, habitantes10, area10, pib10, turismo10, habitantes11, area11, pib11, turismo11, habitantes12, area12, pib12, turismo12);
    printf("\n\n\nCarta D1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta D2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta D3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta D4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes13, area13, pib13, turismo13, habitantes14, area14, pib14, turismo14, habitantes15, area15, pib15, turismo15, habitantes16, area16, pib16, turismo16);
    printf("\n\n\nCarta E1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta E2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta E3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta E4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes17, area17, pib17, turismo17, habitantes18, area18, pib18, turismo18, habitantes19, area19, pib19, turismo19, habitantes20, area20, pib20, turismo20);
    printf("\n\n\nCarta F1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta F2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta F3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta F4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes21, area21, pib21, turismo21, habitantes22, area22, pib22, turismo22, habitantes23, area23, pib23, turismo23, habitantes24, area24, pib24, turismo24);
    printf("\n\n\nCarta G1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta G2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta G3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta G4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes25, area25, pib25, turismo25, habitantes26, area26, pib26, turismo26, habitantes27, area27, pib27, turismo27, habitantes28, area28, pib28, turismo28);
    printf("\n\n\nCarta H1\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta H2\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta H3\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n \n\nCarta H4\n Habitantes: %d\n Área: %f\n PIB: %d\n Pontos turísticos: %d\n", habitantes29, area29, pib29, turismo29, habitantes30, area30, pib30, turismo30, habitantes31, area31, pib31, turismo31, habitantes32, area32, pib32, turismo32);
    
    return 0;
}
