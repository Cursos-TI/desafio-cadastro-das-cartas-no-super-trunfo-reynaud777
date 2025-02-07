#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio Super Trunfo - Países");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char nome;
    int codigo;
    int habitantes;
    float area;
    float pib;
    int turismo;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Nome da cidade: \n", nome);
    scanf("%c", &nome);

    printf("Código da cidade: \n", codigo);
    scanf("%d", &codigo);

    printf("Número de habitantes:", habitantes);
    scanf("%d", &habitantes);

    printf("Área: \n", area);
    scanf("%f", &area);

    printf("PIB: \n", pib);
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: \n", turismo);
    scanf("%d", &turismo);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    return 0;
}
