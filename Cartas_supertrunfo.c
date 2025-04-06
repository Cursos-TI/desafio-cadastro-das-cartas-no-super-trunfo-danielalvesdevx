#include <stdio.h>


typedef struct {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    
    Carta carta1, carta2;
    
    
    printf("Cadastro da carta A01:\n");
    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    
    printf("\nCadastro da carta B02:\n");
    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    
    printf("\nDados cadastrados para a carta A01:\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    
    
    printf("\nDados cadastrados para a carta B02:\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    
    return 0;
}
