#include <stdio.h>

int main() {
    // Declaração das variáveis para os atributos da cidade
    int codigoCidade, populacao, pontosTuristicos;
    float area, pib;
    char nome[20];

    // Coleta de dados do usuário
    printf("=== Cadastro de Carta de Cidade ===\n");

    printf("Digite o código da cidade: ");
    scanf("%d", &codigoCidade);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê nome com espaços9

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("\n=== Carta Cadastrada ===\n");
    printf("Código da Cidade: %d\n", codigoCidade);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
