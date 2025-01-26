#include <stdio.h>

int main(){

    char estado01[40];
    char cidade01[40], cidade02[40], cidade03[40], cidade04[40];
    char codigo01[3], codigo02[3], codigo03[3], codigo04[3];
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
   

   //cidade02


   printf("Digite aqui o código da sua segunda carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo02);

    printf("Digite o nome da sua segunda cidade: \n");
    scanf("%s", &cidade02);

    printf("Digite a população da sua segunda cidade: \n");
    scanf("%f", &populacao02);

     printf("Digite a área territorial da sua segunda cidade: \n");
    scanf("%f", &area02);

    printf("Digite o PIB da sua segunda cidade: \n");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos da sua segunda cidade: \n");
    scanf("%f", &numero02);

    float densidade02 = populacao02 / area02;
    float capita02 = pib02 / populacao02;

    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("População: %.0f\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: R$ %.2f \n", pib02);
    printf("Pontos turísticos: %.0f\n", numero02);
    printf("Densidade populacional: %.2f pessoas/km²\n", densidade02);
    printf("PIB per capita: R$%.3f \n \n", capita02);



//Cidade03


printf("Digite aqui o código da sua segunda carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo03);

    printf("Digite o nome da sua terceira cidade: \n");
    scanf("%s", &cidade03);

    printf("Digite a população da sua terceira cidade: \n");
    scanf("%f", &populacao03);

     printf("Digite a área territorial da sua terceira cidade: \n");
    scanf("%f", &area03);

    printf("Digite o PIB da sua terceira cidade: \n");
    scanf("%f", &pib03);

    printf("Digite o número de pontos turísticos da sua terceira cidade: \n");
    scanf("%f", &numero03);

    float densidade03 = populacao03 / area03;
    float capita03 = pib03 / populacao03;

    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo03);
    printf("Nome da Cidade: %s\n", cidade03);
    printf("População: %.0f\n", populacao03);
    printf("Área: %.2f Km²\n", area03);
    printf("PIB: R$ %.2f \n", pib03);
    printf("Pontos turísticos: %.0f\n", numero03);
    printf("Densidade populacional: %.2f pessoas/km²\n", densidade03);
    printf("PIB per capita: R$%.3f \n \n", capita03);

    //cidade04

    
printf("Digite aqui o código da sua segunda carta: \n");
    printf("[O código da sua carta de ser a primeira letra do estado mais um número. ex: A01, A02...]\n");
    scanf("%s", &codigo04);

    printf("Digite o nome da sua terceira cidade: \n");
    scanf("%s", &cidade04);

    printf("Digite a população da sua terceira cidade: \n");
    scanf("%f", &populacao04);

     printf("Digite a área territorial da sua terceira cidade: \n");
    scanf("%f", &area04);

    printf("Digite o PIB da sua terceira cidade: \n");
    scanf("%f", &pib04);

    printf("Digite o número de pontos turísticos da sua terceira cidade: \n");
    scanf("%f", &numero04);

    float densidade04 = populacao04 / area04;
    float capita04 = pib04 / populacao04;

    printf("Estado: %s\n", estado01);
    printf("Código da carta: %s\n", codigo04);
    printf("Nome da Cidade: %s\n", cidade04);
    printf("População: %.0f\n", populacao04);
    printf("Área: %.2f Km²\n", area04);
    printf("PIB: R$ %.2f \n", pib04);
    printf("Pontos turísticos: %.0f\n", numero04);
    printf("Densidade populacional: %.2f pessoas/km²\n", densidade04);
    printf("PIB per capita: R$%.3f \n \n", capita04);

}
