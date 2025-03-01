#include <stdio.h>



int main(){
    //carta 1
    char estado1[3], codigo1[3], nomeDaCidade1[50] ;
    int populacao1, pontosTuristicos1;
    float area1, PIB1;

    //carta 2
    char estado2[3], codigo2[3], nomeDaCidade2[50] ;
    int populacao2, pontosTuristicos2;
    float area2, PIB2;
    
    printf("Insira os dados da primeira carta \n");
    printf("Digite a letra do Estado: \n");
    scanf("%s", estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite quantidade da população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf(" %f",&area1 );
    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Insira os dados da segunda carta \n");
    printf("Digite a letra do Estado: \n");
    scanf("%s", estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite quantidade da população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área: \n");
    scanf(" %f",&area2 );
    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);


    printf("Carta 1 \n");
    printf("Estado: %s \n Código: %s \n Nome da Cidade: %s \n", estado1, codigo1, nomeDaCidade1);
    printf("População: %d \n Área: %f \n PIB: %f \n Pontos turisticos: %d \n ", populacao1, area1, PIB1, pontosTuristicos1);

    printf("Carta 2 \n");
    printf("Estado: %s \n Código: %s \n Nome da Cidade: %s \n", estado2, codigo2, nomeDaCidade2);
    printf("População: %d \n Área: %f \n PIB: %f \n Pontos turisticos: %d \n ", populacao2, area2, PIB2, pontosTuristicos2);
}