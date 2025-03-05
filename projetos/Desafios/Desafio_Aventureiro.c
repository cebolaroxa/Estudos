#include <stdio.h>

// Struct com as variaveis das cartas
typedef struct cidades {
    char codigo[4];
    char nome[50];
    float populacao, area, pib, percapita, densidade;
    int pontos_turisticos;
} Cidade;

int main() {
    int quantidade;
    
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &quantidade);
    
    if (quantidade < 1) {
        printf("Número inválido! Encerrando o programa.\n");
        return 1;
    }

    Cidade cidades[quantidade];

    for (int i = 0; i < quantidade; i++) {
        printf("\nCidade %d\n", i + 1);
        printf("Código: ");
        scanf("%s", cidades[i].codigo);
        
        printf("Nome: ");
        scanf(" %[^\n]", cidades[i].nome);

        printf("População: ");
        scanf("%f", &cidades[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (milhões): ");
        scanf("%f", &cidades[i].pib);

        printf("Pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);

          // Faz os cálculos e armazena na struct
          cidades[i].densidade = cidades[i].populacao / cidades[i].area;
          cidades[i].percapita = cidades[i].pib / cidades[i].populacao;
    }
    // Exibição dos dados cadastrados anteriormente.
    printf("\n===== CIDADES CADASTRADAS =====\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Código: %s\nNome: %s\nPopulação: %.2f\nÁrea: %.2f km²\nDensidade Populacional: %.2f h/km²\nPIB: R$ %.2f milhões\nPIB Per Capita %.2f R$\nPontos turísticos: %d\n",
               cidades[i].codigo, cidades[i].nome, cidades[i].populacao, cidades[i].area, cidades[i].densidade, cidades[i].pib,  cidades[i].percapita, cidades[i].pontos_turisticos);
    }

    return 0;
}