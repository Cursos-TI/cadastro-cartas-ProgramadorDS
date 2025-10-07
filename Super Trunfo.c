#include <stdio.h> 

struct Carta {
    char estado;                   // Uma letra de 'A' a 'H'
    char codigo[4];                // Código da carta (ex: A01, B03)
    char nomeCidade[50];          // Nome da cidade
    int populacao;                // População da cidade
    float area;                   // Área em km²
    float pib;                    // PIB da cidade
    int pontosTuristicos;        // Número de pontos turísticos
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Instruções para o usuário
    printf("Cadastro da Carta 1:\n");

    // Leitura dos dados da carta 1
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade);

    printf("Digite a População da Cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da Cidade (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade);

    printf("Digite a População da Cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da Cidade (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo as informações cadastradas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
