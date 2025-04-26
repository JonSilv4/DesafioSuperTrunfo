#include <stdio.h>

int main() {

    char estado1 = 'A';
    char codigo1[3];
    char cidade1[20];
    char estado2 = 'B';
    char codigo2[3];
    char cidade2[30];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    double turisticos1, turisticos2;
    float densidade_pop1, densidade_pop2;
    float pib_per_capta1, pib_per_capta2;

// Carta 1

    // Estado 1
    //printf("Digite o estado 1: \n");
    //scanf("%c", &estado1);

    // Código 1
    printf("Digite o código estado A: \n");
    scanf("%s", &codigo1);

    // Cidade 1
    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    // População 1
    printf("Digite a população: \n");
    scanf("%f", &populacao1);

    // Área 1
    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    // PIB 1
    printf("Digite o PIB em R$ bilhões: \n");
    scanf("%f", &pib1);

    // Número de pontos turísticos 1
    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &turisticos1);

// Carta 2

    // Estado 2
    //printf("Digite o estado 2: \n");
    //scanf("%s", &estado2);
 
    // Código 2
    printf("Digite o código estado B: \n");
    scanf("%s", &codigo2);
 
    // Cidade 2
    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);
 
    // População 2
    printf("Digite a população: \n");
    scanf("%f", &populacao2);
 
    // Área 2
    printf("Digite a área em km²: \n");
    scanf("%f", &area2);
 
    // PIB 2
    printf("Digite o PIB em R$ bilhões: \n");
    scanf("%f", &pib2);
 
    // Número de pontos turísticos 2
    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &turisticos2);

// CÁLCULO DA DENSIDADE E PIB PER CAPITA
    densidade_pop1 = populacao1 / area1;
    pib_per_capta1 = (pib1 * 1000000000) / populacao1; 
    
    densidade_pop2 = populacao2 / area2;
    pib_per_capta2 = (pib2 * 1000000000) / populacao2;

// RESULTADO - DADOS

    // Carta 1
    
    printf("Carta 1 \n");
    printf("- Estado: %c\n", estado1);
    printf("- Código: %s\n", codigo1);
    printf("- Nome da cidade: %s\n", cidade1);
    printf("- População: %.0f\n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: %.2f bilhões de reais\n", pib1);
    printf("- Número de pontos turísticos: %d\n", turisticos1);
    printf("- Densidade Populacional %.2f hab/km²\n", densidade_pop1);
    printf("- PIB per Capita: R$ %.2f\n\n", pib_per_capta1);

    // Carta 2
    printf("Carta 2 \n");
    printf("- Estado: %c\n", estado2);
    printf("- Código: %s\n", codigo2);
    printf("- Nome da cidade: %s\n", cidade2);
    printf("- População: %.0f\n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: %.2f bilhões de reais\n", pib2);
    printf("- Número de pontos turísticos: %d\n", turisticos2);
    printf("- Densidade Populacional %.2f hab/km²\n", densidade_pop2);
    printf("- PIB per Capita: R$ %.2f\n\n", pib_per_capta2);
    

// RESULTADO - QUEM VENCEU

    float superpoder1 = (float)(populacao1 + area1 + pib1 + turisticos1 + pib_per_capta1 - densidade_pop1);
    float superpoder2 = (float)(populacao2 + area2 + pib2 + turisticos2 + pib_per_capta2 - densidade_pop2);

    printf("Comparação de cartas: \n");
    printf("- População: Carta 1 venceu (%d)\n",
        populacao1 > populacao2);
    printf("- Área: Carta 1 venceu (%d)\n",
        area1 > area2);
    printf("- PIB: Carta 1 venceu (%d)\n",
        pib1 > pib2);
    printf("- Pontos Turísticos: Carta 1 venceu (%d)\n",
        turisticos1 > turisticos2);
    printf("- Densidade populacional: Carta 1 venceu (%d)\n",
        densidade_pop1 < densidade_pop2);
    printf("- PIB per Capita: Carta 1 venceu (%d)\n",
        pib_per_capta1 > pib_per_capta2);
    printf("- Super Poder: Carta 1 venceu (%d)\n",
        superpoder1 > superpoder2);
return 0;
}