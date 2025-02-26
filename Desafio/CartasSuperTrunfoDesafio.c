#include <stdio.h>

int main() {
// variaveis para adicionar os nomes das cidades.
    char estado, estado2;
    char codigocarta[4], codigocarta2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float Area, Area2;
    float pib, pib2;
    int ptos_tur, ptos_tur2;

    // Criação da primeira carta.

       printf("Cadastro carta número 1 \n"); // Cadastro Carta 1
       printf("\n");

       printf("Digite uma letra para o Estado da Carta 1 entre A-H \n"); // Digitar uma letra para o Estado. C1
       scanf(" %c", &estado);

       printf("Digite o código da carta entre A01 a A03/B01 a B03: \n"); // Digitar o codigo da carta. C1
       scanf("%s", codigocarta);

       printf("Digite o nome da cidade da Carta 1:\n");   // Digitar o nome da cidade. C1
       scanf("%s", cidade);

       printf("Digite o tamanho da população da Carta 1: \n"); // Digitar o tamanho da população. C1
       scanf("%d", &populacao);

       printf("Digite a área da cidade da Carta 1: \n"); // Digitar a Área da cidade. C1
       scanf("%f", &Area);

       printf("Digite o valor do PIB da carta 1: \n"); // Digitar o PIB da cidade. C1
       scanf("%f", &pib);

       printf ("Digite o número de pontos turísticos da cidade da Carta 1:\n"); // Digitar os pontos túristicos da cidade. C1
       scanf("%d", &ptos_tur);

       printf("Carta 1:\n");
       printf("Estado: %c\n - Código da carta: %s\n - Cidade: %s\n - População: %d\n - Área (km²): %.2f\n - PIB: %.2f\n - Pontos túristicos: %d\n",
             estado, codigocarta, cidade, populacao, Area, pib, ptos_tur);
       printf("\n");

    // Criação da segunda carta.
       
       printf("Cadastro carta número 2 \n"); // Cadastro Carta 2
       printf("\n");

       printf("Digite uma letra para o Estado da Carta 2 entre A-H \n"); // Digitar uma letra para o Estado. C2
       scanf(" %c", &estado2);

       printf("Digite o código da carta entre A01 a A03/B01 a B03: \n"); // Digitar o codigo da carta. C2
       scanf("%s", codigocarta2);

       printf("Digite o nome da cidade da Carta 2: \n"); // Digitar o nome da cidade. C2
       scanf("%s", cidade2);

       printf("Digite o tamanho da população da Carta 2: \n"); // Digitar o tamanho da população. C2
       scanf("%d", &populacao2);

       printf("Digite a área da cidade da Carta 2: \n"); // Digitar a Área da cidade. C2
       scanf("%f", &Area2);

       printf("Digite o valor do PIB da carta 2: \n"); // Digitar o PIB da cidade. C2
       scanf("%f", &pib2);

       printf("Digite o número de pontos túristicos da cidade da carta 2: \n"); // Digitar o PIB da cidade. C2
       scanf("%d", &ptos_tur2);

       printf("Carta 2:\n");
       printf("Estado: %c\n - Código da carta: %s\n - Cidade: %s\n - População: %d\n - Área (km²): %.2f\n - PIB: %.2f\n - Pontos túristicos: %d\n",
             estado2, codigocarta2, cidade2, populacao2, Area2, pib2, ptos_tur2);
       printf("\n");


        return 0;

       
}