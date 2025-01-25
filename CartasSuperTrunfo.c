#include <stdio.h>

int main(){

    char estado01[40];
    char cidade01[40], cidade02[40], cidade03[40], cidade04[40];
    char codigo01[3], codigo02 [3], codigo03[3], codigo04[3];
    float populacao01, populacao02, populacao03, populacao04;
    float area01, area02, area03, area04;
    float pib01, pib02, pib03, pib04;
    float numero01, numero02, numero03, numero04;



    printf("Seja bem-vindo ao Super Trunfo Países \n");
    printf("Digite aqui o nome do seu estado: \n");
    scanf("%s", &estado01);


    printf("Digite aqui o código da sua carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo01);

      printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade01);

    printf("Digite a população da sua cidade: \n");
    scanf("%f", &populacao01);

    printf("Digite a área territorial da sua cidade: \n");
    scanf("%f", &area01);

     printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib01);

     printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%f", &numero01);

    float densidade01 = populacao01 / area01;
    float capita01 = pib01 / populacao01;


    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("População: %.0f\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: R$ %.2f \n", pib01);
    printf("Pontos turísticos: %.0f\n", numero01);
    printf("Densidade populacional: %.2f pessoas/km²\n", densidade01);
    printf("PIB per capita: R$%.3f \n \n", capita01);
   

   printf("Digite aqui o código da sua segunda carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo02);

    printf("Digite o nome da sua segunda cidade: \n");
    scanf("%s", &cidade02);

    printf("Digite a população da sua segunda cidade: \n");
    scanf("%f", &populacao02);

     printf("Digite a área territorial da sua cidade: \n");
    scanf("%f", &area02);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%f", &numero02);

    float densidade02 = populacao02 / area02;
    float capita02 = pib02 / populacao02;

}
