#include <stdio.h>

// Struct pra representar a carta
struct Carta {
    char codigo[4];            // Ex: A01, B02 (3 letras + \0)
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da primeira carta

    printf("Digite o código da primeira carta: ");
    scanf("%s", carta1.codigo);

    printf("Estado: ");
    scanf("%s", carta1.estado);

    printf("Cidade: ");
    scanf("%s", carta1.cidade);

    printf("População (em Milhões): ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta

    printf("\nDigite o código da segunda carta: ");
    scanf("%s", carta2.codigo);

    printf("Estado: ");
    scanf("%s", carta2.estado);

    printf("Cidade: ");
    scanf("%s", carta2.cidade);

    printf("População (em Milhões): ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em Bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados

    printf("\nCARTA 1\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d Milhões\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f Bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCARTA 2\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("População: %d Milhões\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f Bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;

}