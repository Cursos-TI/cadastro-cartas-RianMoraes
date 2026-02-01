#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // variaveis da carta 01
    char estadoCarta01, codigoCarta01[4], nomeCidadeCarta01[50];
    int populacaoCarta01, qntPontoTuristicoCarta01;
    float areaCarta01, pibCarta01;

    // variaveis da carta 02
    char estadoCarta02, codigoCarta02[4], nomeCidadeCarta02[50];
    int populacaoCarta02, qntPontoTuristicoCarta02;
    float areaCarta02, pibCarta02;

  // Área para entrada de dados
  // entrada de dados carta01
    printf("Digite o estado brasileiro da Carta 01: ");
    scanf(" %c", &estadoCarta01);

    printf("Digite o código desejado da Carta 01: ");
    scanf("%s", codigoCarta01);

    printf("Digite o nome da Cidade da Carta 01: ");
    getchar();
    fgets(nomeCidadeCarta01, sizeof(nomeCidadeCarta01), stdin);
    nomeCidadeCarta01[strcspn(nomeCidadeCarta01, "\n")] = 0;

    printf("Digite a população total da cidade escolhida da Carta 01: ");
    scanf("%d", &populacaoCarta01);

    printf("Digite a área da cidade escolhida da Carta 01: ");
    scanf("%f", &areaCarta01);

    printf("Digite o PIB da cidade escolhida da Carta 01: ");
    scanf("%f", &pibCarta01);

    printf("Digite a quantidade de pontos turisticos da cidade escolhida da Carta 01: ");
    scanf("%d", &qntPontoTuristicoCarta01);

    // entrada de dados carta02
    printf("Digite o estado brasileiro da Carta 02: ");
    scanf(" %c", &estadoCarta02);

    printf("Digite o código desejado da Carta 02: ");
    scanf("%s", codigoCarta02);

    printf("Digite o nome da Cidade da Carta 02: ");
    getchar();
    fgets(nomeCidadeCarta02, sizeof(nomeCidadeCarta02), stdin);
    nomeCidadeCarta02[strcspn(nomeCidadeCarta02, "\n")] = 0;

    printf("Digite a população total da cidade escolhida da Carta 02: ");
    scanf("%d", &populacaoCarta02);

    printf("Digite a área da cidade escolhida da Carta 02: ");
    scanf("%f", &areaCarta02);

    printf("Digite o PIB da cidade escolhida da Carta 02: ");
    scanf("%f", &pibCarta02);

    printf("Digite a quantidade de pontos turisticos da cidade escolhida da Carta 02: ");
    scanf("%d", &qntPontoTuristicoCarta02);

  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoCarta01);
    printf("Código: %s\n", codigoCarta01);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta01);
    printf("População: %i\n", populacaoCarta01);
    printf("Área: %f km²\n", areaCarta01);
    printf("PIB: %f bilhões de reais\n", pibCarta01);
    printf("Número de Pontos Turísticos: %d\n\n", qntPontoTuristicoCarta01);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoCarta02);
    printf("Código: %s\n", codigoCarta02);
    printf("Nome da Cidade: %s\n", nomeCidadeCarta02);
    printf("População: %i\n", populacaoCarta02);
    printf("Área: %f km²\n", areaCarta02);
    printf("PIB: %f bilhões de reais\n", pibCarta02);
    printf("Número de Pontos Turísticos: %d\n", qntPontoTuristicoCarta02);


return 0;
} 
