#include <stdio.h>

int main (){
    // Variáveis da Carta 1.
    char estado[20];
    char codigoDaCarta[20];
    char nomeCidade[20];
    int numeroHabitantes;
    float areaAoQuadrado;
    float pib;
    int NumerodePontosTuristicos;
    float calDenPopu;
    float calPIBperCapital;

    // Variáveis da Carta 2.
    char segundoEstado[20];
    char codigoDaSegundaCarta[20];
    char segundoNomeCidade[20];
    int segundoNumeroHabitantes;
    float segundoAreaAoQuadrado;
    float segundoPib;
    int segundoNumerodePontosTuristicos;
    float calDenPopuSegundaCarta;
    float calPIBperCapitalSegundaCarta;
    
    // Printf de introdução ao jogo Super Trunfo.
    printf("Bem-vindo ao jogo Super Trunfo! \nVamos forma a primeira carta:\n");

    // Printf para escolher uma letra representando um Estado.
    printf("Escolhar uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", estado);

    // Printf para passa novamente a letra do Estado mais um número de código.
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", codigoDaCarta);

    // Printf para escolher uma Cidade.
    printf("Passe o nome da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", nomeCidade);

    // Printf para passa o número de habitantes da cidade escolhida.
    printf("O número de habitantes da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &numeroHabitantes);

    // Printf para passa a área da Cidade em quilômetros quadrados.
    printf("A área da cidade em quilômetros quadrados: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &areaAoQuadrado);

    // Printf para passa PIB da Cidade escolhida.
    printf("O Produto Interno Bruto da cidade(PIB): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &pib);

    // Printf para passa a quantidade de pontos turísticos da Cidade escolhida.
    printf("A quantidade de pontos turísticos na cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &NumerodePontosTuristicos);


    // Printf para anuncia a criação da segunda carta do jogo Super Trunfo.
    printf("Agora vamos forma a segunda carta: \n");

    // Printf para escolher uma letra representando um Estado para a segunda carta.
    printf("Escolhar uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", segundoEstado);

    // Printf para passa novamente a letra do Estado mais um número de código para a segunda carta.
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", codigoDaSegundaCarta);

    // Printf para escolher uma Cidade para a segunda carta.
    printf("Passe o nome da cidade(use traço para separa as palavras): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", segundoNomeCidade);

    // Printf para passa o número de habitantes da cidade escolhida da segunda carta.
    printf("O número de habitantes da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &segundoNumeroHabitantes);

    // Printf para passa a área da Cidade em quilômetros quadrados da segunda carta.
    printf("A área da cidade em quilômetros quadrados: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &segundoAreaAoQuadrado);

    // Printf para passa PIB da Cidade escolhida da segunda carta.
    printf("O Produto Interno Bruto da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &segundoPib);

    // Printf para passa a quantidade de pontos turísticos da Cidade escolhida da segunda carta.
    printf("A quantidade de pontos turísticos na cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &segundoNumerodePontosTuristicos);

    //calculo da densidade populacional primeira carta
    calDenPopu = (float) numeroHabitantes / areaAoQuadrado;
    //calculo do PIB per Capita primeira carta
    calPIBperCapital = (float) pib / numeroHabitantes;

    //calculo da densidade populacional segunda carta
    calDenPopuSegundaCarta = (float) segundoNumeroHabitantes / segundoAreaAoQuadrado;
    //calculo do PIB per Capita segunda carta
    calPIBperCapitalSegundaCarta = (float) segundoPib / segundoNumeroHabitantes;

    //Variáveis para exibir o resultado 

    float SuperPoder = (float) numeroHabitantes + areaAoQuadrado + (float)NumerodePontosTuristicos + pib + calPIBperCapital + (1 / calDenPopu) + NumerodePontosTuristicos; 
    
    float SuperPoderSegundaCarta = (float) segundoNumeroHabitantes + segundoAreaAoQuadrado + (float)segundoNumerodePontosTuristicos + segundoPib + calPIBperCapitalSegundaCarta + (1 / calDenPopuSegundaCarta) + segundoNumerodePontosTuristicos;

    // Printfs que seram exibidas
    printf("\nCarta 1: \n");
    printf("Estado: %s  \nCódigo: %s \n", estado, codigoDaCarta);
    printf("Nome da Cidade: %s  \nPupulação: %d \n", nomeCidade, numeroHabitantes);
    printf("Área: %.2f km² \nPIB: %.2f bilhões de reais\n", areaAoQuadrado, pib);
    printf("Número de Pontos Turísticos: %d \n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", calDenPopu);
    printf("PIB per Capita: %.2f reais\n", calPIBperCapital);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("\nCarta 2: \n");
    printf("Estado: %s \nCódigo: %s \n", segundoEstado, codigoDaSegundaCarta);
    printf("Nome da Cidade: %s  \nPupulação: %d \n", segundoNomeCidade, segundoNumeroHabitantes);
    printf("Área: %.2f km² \nPIB: %.2f bilhões de reais\n", segundoAreaAoQuadrado, segundoPib);
    printf("Número de Pontos Turísticos: %d\n", segundoNumerodePontosTuristicos);
    printf("Densidade Populacional %.2f hab/km²\n", calDenPopuSegundaCarta);
    printf("PIB per Capita: %.2f reais\n", calPIBperCapitalSegundaCarta);
    printf("Super Poder: %.2f\n", SuperPoderSegundaCarta);

    //Printfs para exibir o resultado da comparação
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", numeroHabitantes > segundoNumeroHabitantes );
    printf("Área: %d\n", areaAoQuadrado > segundoAreaAoQuadrado);
    printf("PIB: %d\n", pib > segundoPib);
    printf("Pontos Turísticos: %d\n", NumerodePontosTuristicos > segundoNumerodePontosTuristicos);
    printf("Densidade Populacional: %d\n", calDenPopu > calDenPopuSegundaCarta);
    printf("PIB per Capita: %d\n", calPIBperCapital > calPIBperCapitalSegundaCarta);
    printf("Super Poder: %d\n", SuperPoder > SuperPoderSegundaCarta);

    //tema 2 - comparação de atributos
    // variaveis
    int atributos;

    printf("Escolhar um Atributo para fazer a comparação: \n");
    printf("1. População\n");
    printf("2. Área \n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolhar: ");
    scanf("%d", &atributos);

    switch (atributos)
    {
    case 1:
        printf("Atributo Populacional:\n");
        printf("Carta 1 Cidade %s: %d - Carta 2 Cidade %s: %d\n", nomeCidade, numeroHabitantes, segundoNomeCidade, segundoNumeroHabitantes);
        if (numeroHabitantes > segundoNumeroHabitantes)
        {
            printf("Carta 1 - Cidade %s Ganhou!\n", nomeCidade);
        }
        else if (numeroHabitantes < segundoNumeroHabitantes)
        {
            printf("Carta 2 - Cidade %s Ganhou!\n", segundoNomeCidade);
        }
        else
        {
            printf("O Atributo das cartas Empataram\n");
        }
        
    break;
    case 2:
        printf("Atributo Área:\n");
        printf("Carta 1 Cidade %s: %.2f - Carta 2 Cidade %s: %.2f\n", nomeCidade, areaAoQuadrado, segundoNomeCidade, segundoAreaAoQuadrado);
        if (areaAoQuadrado > segundoAreaAoQuadrado)
        {
            printf("Carta 1 - Cidade %s Ganhou!\n", nomeCidade);
        }
        else if (areaAoQuadrado < segundoAreaAoQuadrado)
        {
            printf("Carta 2 - Cidade %s Ganhou!\n", segundoNomeCidade);
        }
        else
        {
            printf("O Atributo das cartas Empataram\n");
        }
        
    break;
    case 3:
        printf("Atributo PIB:\n");
        printf("Carta 1 Cidade %s: %.2f - Carta 2 Cidade %s: %.2f\n", nomeCidade, pib, segundoNomeCidade, segundoPib);
        if (pib > segundoPib)
        {
            printf("Carta 1 - Cidade %s Ganhou!\n", nomeCidade);
        }
        else if (pib < segundoPib)
        {
            printf("Carta 2 - Cidade %s Ganhou!\n", segundoNomeCidade);
        }
        else
        {
            printf("O Atributo das cartas Empataram\n");
        }

    break;
    case 4:
        printf("Atributo Pontos Turísticos:\n");
        printf("Carta 1 Cidade %s: %d - Carta 2 Cidade %s: %d\n", nomeCidade, NumerodePontosTuristicos, segundoNomeCidade, segundoNumerodePontosTuristicos);
        if (NumerodePontosTuristicos > segundoNumerodePontosTuristicos)
        {
            printf("Carta 1 - Cidade %s Ganhou!\n", nomeCidade);
        }
        else if (NumerodePontosTuristicos < segundoNumerodePontosTuristicos)
        {
            printf("Carta 2 - Cidade %s Ganhou!\n", segundoNomeCidade);
        }
        else
        {
            printf("O Atributo das cartas Empataram\n");
        }

    break;
    case 5:
        printf("Atributo Densidade Populacional:\n");
        printf("Carta 1 Cidade %s: %.2f - Carta 2 Cidade %s: %.2f\n", nomeCidade, calDenPopu, segundoNomeCidade, calDenPopuSegundaCarta);
        if (calDenPopu < calDenPopuSegundaCarta)
        {
            printf("Carta 1 - Cidade %s Ganhou!\n", nomeCidade);
        }
        else if (calDenPopu > calDenPopuSegundaCarta)
        {
            printf("Carta 2 - Cidade %s Ganhou!\n", segundoNomeCidade);
        }
        else
        {
            printf("O Atributo das cartas Empataram\n");
        }

    break;
    default:
        printf("Opção inválida!\n");
    break;
    }

    return 0;
}