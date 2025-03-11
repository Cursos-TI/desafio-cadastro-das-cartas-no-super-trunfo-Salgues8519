#include <stdio.h>

// Função para limpar o buffer de entrada
void limparBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){
    //carta 1
    char estado1[3], codigo1[3], nomeDaCidade1[50] ;
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, densidadePopulacional1, PIB1, pibPerCapita1, superPoder1;
    
    

    //carta 2
    char estado2[3], codigo2[3], nomeDaCidade2[50] ;
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, densidadePopulacional2, PIB2, pibPerCapita2, superPoder2;

    

    printf("Insira os dados da primeira carta \n");
    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%s", estado1);
    limparBuffer();
    printf("Digite o código da carta (Dois digitos): \n");
    scanf("%s", codigo1);
    limparBuffer();
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);
    limparBuffer();
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    limparBuffer();
    printf("Digite quantidade da população: \n");
    scanf("%d", &populacao1);
    limparBuffer();
    printf("Digite a área: \n");
    scanf("  %f",&area1 );
    limparBuffer();
    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = PIB1 / populacao1;

    superPoder1 = (float) populacao1 + area1 + PIB1 + pontosTuristicos1 + pibPerCapita1 + ( 1 / densidadePopulacional1);

    printf("Insira os dados da segunda carta \n");
    printf("Digite a letra do Estado (Entre A e H): \n");
    scanf("%s", estado2);
    limparBuffer();
    printf("Digite o código da carta (Dois digitos): \n");
    scanf("%s", codigo2);
    limparBuffer();
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);
    limparBuffer();
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    limparBuffer();
    printf("Digite quantidade da população: \n");
    scanf("%d", &populacao2);
    limparBuffer();
    printf("Digite a área: \n");
    scanf("  %f",&area2 );
    limparBuffer();
    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = PIB2 / populacao2;

    superPoder2 = (float) populacao2 + area2 + PIB2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", estado1, codigo1);  
    printf("Nome da Cidade: %s \n", nomeDaCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);  
    printf("PIB: %f \n", PIB1);     
    printf("Pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);
    printf("Super poder = %f \n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);  
    printf("Nome da Cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);  
    printf("PIB: %f \n", PIB2);     
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);
    printf("Super Poder = %f \n", superPoder2);

    //Comparando Atributos das cartas
    printf("\nComparação das Cartas:\n");
    printf("População: Carta 1 > Carta 2? %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 > Carta 2? %d\n", area1 > area2);
    printf("PIB: Carta 1 > Carta 2? %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 > Carta 2? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 < Carta 2? %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 > Carta 2? %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 > Carta 2? %d\n", superPoder1 > superPoder2);

    return 0;
}
