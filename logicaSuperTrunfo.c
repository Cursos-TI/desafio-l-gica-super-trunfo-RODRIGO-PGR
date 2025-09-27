#include <stdio.h>

int main() {
  // Carta 1 - São Paulo
  char estado1 = 'A';
  char codigo1[4] = "A01";
  char cidade1[20] = "Sao Paulo";
  int populacao1 = 12300000;
  float area1 = 1521.11;
  float pib1 = 699000000000.0; // PIB em reais
  int pontosturisticos1 = 15;
  float densidade1, pibpercapita1;

  // Carta 2 - Rio de Janeiro
  char estado2 = 'B';
  char codigo2[4] = "B02";
  char cidade2[20] = "Rio de Janeiro";
  int populacao2 = 6710000;
  float area2 = 1200.25;
  float pib2 = 430000000000.0; // PIB em reais
  int pontosturisticos2 = 20;
  float densidade2, pibpercapita2;

  // Cálculos
  densidade1 = (float) populacao1 / area1;
  pibpercapita1 = pib1 / (float) populacao1;

  densidade2 = (float) populacao2 / area2;
  pibpercapita2 = pib2 / (float) populacao2;

  // Exibição das cartas
  printf("=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d.3\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f R$\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f R$\n", pibpercapita1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d.3\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f R$\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f R$\n", pibpercapita2);

  // Comparação por PIB
  printf("\n=== Comparacao de Cartas (Atributo: PIB) ===\n");
  printf("Carta 1 - %s: %.2f R$\n", cidade1, pib1);
  printf("Carta 2 - %s: %.2f R$\n", cidade2, pib2);
   // comparacao com pib
  if (pib1 > pib2) {
      printf("Resultado: Carta 1 tem o maior pib (%s)cidade1 venceu!\n", cidade1);
  } else if (pib2 > pib1) {
      printf("Resultado: Carta 2 tem o maior pib (%s)cidade2 venceu!\n", cidade2);
  } else {
      //printf("Resultado: Empate!\n");
  }
  if ("Densidade Populacional1 > densidade populacional2" ) {
        printf("Resultado: Carta 1 tem a maior densidade populacional (%s)cidade1 venceu!\n", cidade1);
    } else if ("densidade populacional2 > densidade populacional1") {
        printf("Resultado: Carta 2 tem a maior densidade populacional (%s)cidade2 venceu!\n", cidade2);
     // printf("Resultado: Empate!\n");
     
  }

  return 0;
}
