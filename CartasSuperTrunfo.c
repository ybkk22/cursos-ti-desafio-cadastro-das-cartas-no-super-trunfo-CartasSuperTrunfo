#include <stdio.h>

int main() { 
    
    // Definindo variáveis para armazenar informações das cartas
    char SaoPaulo[50], RiodeJaneiro[50];
    char A01[10], B02[10];

    int Populacaosaopaulo;
    int Populacaoriodojaneiro;
    int pontosTuristicossaopaulo;
    int pontosTuristicosriodejaneiro;

    float areaSaoPaulo;
    float areaRioDeJaneiro;
    float pibSaoPaulo;
    float pibRioDeJaneiro;

    
        
    // Informações da carta de São Paulo
    printf("Nome do estado (A): ");
    scanf("%s", SaoPaulo);
    printf("Código da carta (A): ");
    scanf("%s", A01);
    printf("População: ");
    scanf("%d", &Populacaosaopaulo);
    printf("Área: ");
    scanf("%f", &areaSaoPaulo);
    printf("PIB: ");
    scanf("%f", &pibSaoPaulo);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicossaopaulo);

    // Informações da carta do Rio de Janeiro
    printf("Nome do estado (B): ");
    scanf("%s", RiodeJaneiro);
    printf("Código da carta (B): ");
    scanf("%s", B02);
    printf("População: ");
    scanf("%d", &Populacaoriodojaneiro);
    printf("Área: ");
    scanf("%f", &areaRioDeJaneiro);
    printf("PIB: ");
    scanf("%f", &pibRioDeJaneiro);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosriodejaneiro);

    // Cálculos
    float densidadepopulacionalSaoPaulo = Populacaosaopaulo / areaSaoPaulo;
    float densidadepopulacionalRioDeJaneiro = Populacaoriodojaneiro / areaRioDeJaneiro;
    
    // PIB per capita (convertendo de bilhões para reais)
    float pibpercapitaSaoPaulo = (pibSaoPaulo * 1000000000) / Populacaosaopaulo;
    float pibpercapitaRioDeJaneiro = (pibRioDeJaneiro * 1000000000) / Populacaoriodojaneiro;

    // Super poder
    float poder1 = 
    (float)Populacaosaopaulo / 1000000 +
    areaSaoPaulo / 1000 +
    pibSaoPaulo + 
    pontosTuristicossaopaulo * 10 +
    pibpercapitaSaoPaulo / 10000 +
    (1 / densidadepopulacionalSaoPaulo);

    float poder2 = 
    (float)Populacaoriodojaneiro / 1000000 +
    areaRioDeJaneiro / 1000 +
    pibRioDeJaneiro + 
    pontosTuristicosriodejaneiro * 10 +
    pibpercapitaRioDeJaneiro / 10000 +
    (1 / densidadepopulacionalRioDeJaneiro);
    


    // Exibição das cartas
    printf("\n--- INFORMAÇÕES DAS CARTAS ---\n");
    printf("Carta 1: %s - %s\n", A01, SaoPaulo);
    printf("População: %d\n", Populacaosaopaulo);
    printf("Área: %.2f km²\n", areaSaoPaulo);
    printf("PIB: R$%.2f bilhões\n", pibSaoPaulo);
    printf("Pontos turísticos: %d\n", pontosTuristicossaopaulo);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacionalSaoPaulo);
    printf("PIB per capita: R$%.2f reais\n\n", pibpercapitaSaoPaulo);
    printf("Carta 2: %s - %s\n", B02, RiodeJaneiro);
    printf("População: %d\n", Populacaoriodojaneiro);
    printf("Área: %.2f km²\n", areaRioDeJaneiro);
    printf("PIB: R$%.2f bilhões\n", pibRioDeJaneiro);
    printf("Pontos turísticos: %d\n", pontosTuristicosriodejaneiro);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacionalRioDeJaneiro);
    printf("PIB per capita: R$%.2f reais\n\n", pibpercapitaRioDeJaneiro);

    printf("\n---- Comparação de Cartas ----\n");
    printf("População: %s\n", (Populacaosaopaulo > Populacaoriodojaneiro) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área: %s\n", (areaSaoPaulo > areaRioDeJaneiro) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", (pibSaoPaulo > pibRioDeJaneiro) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos turísticos: %s\n", (pontosTuristicossaopaulo > pontosTuristicosriodejaneiro) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade populacional (menor é melhor): %s\n", (densidadepopulacionalSaoPaulo < densidadepopulacionalRioDeJaneiro) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per capita: %s\n", (pibpercapitaSaoPaulo > pibpercapitaRioDeJaneiro) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    // Resultado final
    printf("\nSuper Poder: %s venceu!\n", (poder1 > poder2) ? "São Paulo" : "Rio de Janeiro");

    /* 
    Fórmula do "super poder" (normalizada):
    População em milhões + área em mil km² + PIB em bilhões +
    pontos turísticos (vezes 10) + PIB per capita (dividido por 10 mil) +
    1 dividido pela densidade populacional

    
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30 
 

    > : Maior que
    < : Menor que
    >= : Maior ou igual a
    <= : Menor ou igual a
    == : Igual a
    != : Diferente de
    */
  
    return 0;
}
