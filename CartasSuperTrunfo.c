#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // variaveis da carta 01
    char estadoCarta01, codigoCarta01[4], nomeCidadeCarta01[50];
    int qntPontoTuristicoCarta01;
    float areaCarta01, pibCarta01, densidadePopCarta01, pibCaptaCarta01, superPoder01;
    unsigned long int populacaoCarta01; 

    char carta01[1] = "1";
    char carta02[1] = "2";
    
    // variaveis da carta 02
    char estadoCarta02, codigoCarta02[4], nomeCidadeCarta02[50];
    int qntPontoTuristicoCarta02;
    float areaCarta02, pibCarta02, densidadePopCarta02, pibCaptaCarta02, superPoder02;
    unsigned long int populacaoCarta02; 
    

  // Área para entrada de dados
  // entrada de dados carta01
    printf("Digite a primeira letra do estado brasileiro da Carta 01: ");
    scanf(" %c", &estadoCarta01);

    printf("Digite o código desejado da Carta 01: ");
    scanf("%s", codigoCarta01);

    printf("Digite o nome da Cidade da Carta 01: ");
    getchar();
    fgets(nomeCidadeCarta01, sizeof(nomeCidadeCarta01), stdin);
    nomeCidadeCarta01[strcspn(nomeCidadeCarta01, "\n")] = 0;

    printf("Digite a população total da cidade escolhida da Carta 01: ");
    scanf("%lu", &populacaoCarta01);

    printf("Digite a área da cidade escolhida da Carta 01: ");
    scanf("%f", &areaCarta01);

    printf("Digite o PIB da cidade escolhida da Carta 01: ");
    scanf("%f", &pibCarta01);

    printf("Digite a quantidade de pontos turisticos da cidade escolhida da Carta 01: ");
    scanf("%d", &qntPontoTuristicoCarta01);

    printf("\n\n");

    // entrada de dados carta02
    printf("Digite a primeira letra do estado brasileiro da Carta 02: ");
    scanf(" %c", &estadoCarta02);

    printf("Digite o código desejado da Carta 02: ");
    scanf("%s", codigoCarta02);

    printf("Digite o nome da Cidade da Carta 02: ");
    getchar();
    fgets(nomeCidadeCarta02, sizeof(nomeCidadeCarta02), stdin);
    nomeCidadeCarta02[strcspn(nomeCidadeCarta02, "\n")] = 0;

    printf("Digite a população total da cidade escolhida da Carta 02: ");
    scanf("%lu", &populacaoCarta02);

    printf("Digite a área da cidade escolhida da Carta 02: ");
    scanf("%f", &areaCarta02);

    printf("Digite o PIB da cidade escolhida da Carta 02: ");
    scanf("%f", &pibCarta02);

    printf("Digite a quantidade de pontos turisticos da cidade escolhida da Carta 02: ");
    scanf("%d", &qntPontoTuristicoCarta02);

    printf("\n\n");

    //calculos
    densidadePopCarta01 = (float) populacaoCarta01/areaCarta01;
    pibCaptaCarta01 = (pibCarta01 * 1000000000.0f) / populacaoCarta01;
    
    densidadePopCarta02 = (float) populacaoCarta02 / areaCarta02;
    pibCaptaCarta02 = (pibCarta02 * 1000000000.0f) / populacaoCarta02;

    superPoder01 = (float)populacaoCarta01 + 
                          areaCarta01  + 
                          pibCarta01 + 
                          qntPontoTuristicoCarta01 + 
                          pibCaptaCarta01 + 
                          (1.0f / densidadePopCarta01);

    superPoder02 = (float)populacaoCarta02 + 
                          areaCarta02  + 
                          pibCarta02 + 
                          qntPontoTuristicoCarta02 + 
                          pibCaptaCarta02 + 
                          (1.0f / densidadePopCarta02);


    int resultPopulacao =   populacaoCarta01 >populacaoCarta02;                      
    int resultArea = areaCarta01 > areaCarta02   ;             
    int resultPib = pibCarta01 > pibCarta02  ;      
    int resultPontTuristic  = qntPontoTuristicoCarta01 > qntPontoTuristicoCarta02 ;         
    int resultDensidade = densidadePopCarta01 < densidadePopCarta02 ;
    int resultPibPC = pibCaptaCarta01 > pibCaptaCarta02 ;
    int resultSuperpoder = superPoder01 > superPoder02  ;


  // Área para exibição dos dados da cidade
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu(%d)\n", resultPopulacao);
    printf("Área: Carta 1 venceu(%d)\n", resultArea);
    printf("PIB: Carta 1 venceu(%d)\n", resultPib);
    printf("Número de Pontos Turísticos: Carta 1 venceu(%d)\n", resultPontTuristic);
    printf("Densidade Populacional: Carta 2 venceu(%d)\n", resultDensidade);
    printf("PIB per Capita: Carta 1 venceu(%d)\n", resultPibPC);
    printf("superpoder: Carta 1 venceu(%d)\n", resultSuperpoder);

return 0;
} 
