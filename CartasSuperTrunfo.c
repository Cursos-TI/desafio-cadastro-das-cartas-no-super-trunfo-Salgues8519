#include <stdio.h>

// Função para limpar o buffer de entrada
void limparBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){
    //carta 1
    char estado1[3], codigo1[3], nomeDaCidade1[50] ;
    int populacao1, pontosTuristicos1;
    float area1, densidadePopulacional1, PIB1, pibPerCapita1;

    

    //carta 2
    char estado2[3], codigo2[3], nomeDaCidade2[50] ;
    int populacao2, pontosTuristicos2;
    float area2, densidadePopulacional2, PIB2, pibPerCapita2;

    

    printf("Insira os dados da primeira carta \n");
    printf("Digite a letra do Estado: \n");
    scanf("%s", estado1);
    limparBuffer();
    printf("Digite o código da carta: \n");
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

    printf("Insira os dados da segunda carta \n");
    printf("Digite a letra do Estado: \n");
    scanf("%s", estado2);
    limparBuffer();
    printf("Digite o código da carta: \n");
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

    return 0;
}
