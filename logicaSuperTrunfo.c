#include <stdio.h>

int main () {
    char estado1[20], estado2[20], cc1[5], cc2[5], cidade1[30], cidade2[30];    //cc = Código da Carta
    int pop1, pop2;                 //pop = População
    float area1, area2, pib1, pib2;
    int npt1, npt2;             //Número de Pontos Turisticos
    float densidade1, densidade2, pibc1, pibc2;         //pibc = PIB per Capita

    printf("\n========//DIGITE OS DADOS DA PRIMEIRA CARTA//========\n");

    printf("\nEstado: \n");
    scanf("%s", &estado1);

    printf( "Codigo da carta: \n");
    scanf("%s", &cc1);

    printf( "Cidade: \n");
    scanf("%s", &cidade1);

    printf("Populacao: \n");
    scanf("%i", &pop1);

    printf("Area em km2: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &npt1);

    densidade1 = (float)pop1 / area1;
    pibc1 = pib1 / (float)pop1;

    printf("\n=============/DIGITE OS DADOS DA SEGUNDA CARTA/==============\n");

    printf("\nEstado: \n");
    scanf("%s", &estado2);

    printf( "Codigo da carta: \n");
    scanf("%s", &cc2);

    printf( "Cidade: \n");
    scanf("%s", &cidade2);

    printf("Populacao: \n");
    scanf("%i", &pop2);

    printf("Area em km2: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%i", &npt2);

    densidade2 = (float)pop2 / area2;
    pibc2 = pib2 / (float)pop2;

    printf("\n========//PRIMEIRA CARTA//========\n");
    printf("\nEstado: %s \n", &estado1);
    printf("Codigo da carta: %s \n", &cc1);
    printf("Cidade: %s \n", &cidade1);
    printf("Populacao: %i \n", pop1);
    printf("Area em km2: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de pontos turisticos: %i \n", npt1);
    printf("Densidade populacional: %.2f \n",densidade1);
    printf("PIB per capita: %.2f \n", pibc1);

    printf("\n========//SEGUNDA CARTA//========\n");

    printf("\nEstado: %s \n", &estado2);
    printf("Codigo da carta: %s \n", &cc2);
    printf("Cidade: %s \n", &cidade2);
    printf("Populacao: %i \n", pop2);
    printf("Area em km2: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de pontos turisticos: %i \n", npt2);
    printf("Densidade populacional: %.2f \n",densidade2);
    printf("PIB per capita: %.2f \n", pibc2);

    printf("\n========//- BATALHA DE ATRIBUTOS DAS CARTAS -//========\n");

    printf("\n======//- POPULACAO x POPULACAO -//======\n");

    if (pop1 > pop2) {
        printf("A populacao da primeira carta e de %.i \nA populacao da segunda carta e de %.i \nO vencedor e a primeira carta com %i.", pop1, pop2, pop1);
    }
    if(pop2 > pop1) {
        printf("A populacao da segunda carta e de %i \nA populacao da primeira carta e de %i \nO vencedor e a segunda carta com %i. ", pop2, pop1, pop2);
    }
    if (pop1 == pop2){
        printf("A populacao da primeira carta e de %.i \nA populacao da segunda carta e de %.i \nHouve um empate tente outros atributos.", pop1, pop2);
    }

    printf("\n======//- AREA x AREA -//======\n");

    if (area1 > area2) {
        printf("A area da primeira carta e de %.2f \nA area da segunda carta e de %.2f \nO vencedor e a primeira carta com area de %.2f.\n", area1, area2, area1);
    }
    if(area2 > area1) {
        printf("A area da segunda carta e de %.2f \nA area da primeira carta e de %.2f \nO vencedor e a segunda carta com %.2f.\n ", area2, area1, area2);
    }
    if (area1 == area2) {
        printf("A area da primeira carta e de %.2f \nA area da segunda carta e de %.2f \nHouve um empate tente outros atributos.\n", area1, area2);
    }
    printf("\n======//- PIB x PIB -//======\n");

    if (pib1 > pib2) {
        printf("O PIB da primeira carta e de %.2f \nO PIB da segunda carta e de %.2f \nO vencedor e a primeira carta com o PIB de %.2f.\n", pib1, pib2, pib1);
    }
    if(pib2 > pib1) {
        printf("O PIB da segunda carta e de %.2f \nO PIB da primeira carta e de %.2f \nO vencedor e a segunda carta com o PIB de %.2f.\n", pib2, pib1, pib2);
    }
    if (pib1 == pib2) {
        printf("O PIB da primeira carta e de %.2f \nO PIB da segunda carta e de %.2f \nHouve um empate tente outros atributos.\n", pib1, pib2);
    }

    printf("\n======//- DENSIDADE PUPULACIONAL x DENSIDADE POPULACIONAL -//======\n");

    if (densidade1 < densidade2) {
        printf("A densidade populacional da primeira carta e de %.2f \nA densidade populacional da segunda carta e de %.2f \nO vencedor e a primeira carta com a densidade populacional de %.2f.\n", densidade1, densidade2, densidade1);
    }
    if(densidade2 < densidade1) {
        printf("A densidade populacional da segunda carta e de %.2f \nA densidade populacional da primeira carta e de %.2f \nO vencedor e a segunda carta com a densidade populacional de %.2f.\n", densidade2, densidade1, densidade2);
    }
    if (densidade1 == densidade2) {
        printf("A densidade populacional da primeira carta e de %.2f \nA densidade populacional da segunda carta e de %.2f \nHouve um empate tente outros atributos.\n", densidade1, densidade2);
    }

    printf("\n======//- PIB PER CAPITA x PIB PER CAPITA -//======\n");

    if (pibc1 > pibc2) {
        printf("O PIB per capita da primeira carta e de %.2f \nO PIB per capitada segunda carta e de %.2f \nO vencedor e a primeira carta com o PIB per capita de %.2f.\n", pibc1, pibc2, pibc1);
    }
    if(pibc2 > pibc1) {
        printf("O PIB per capita da segunda carta e de %.2f \nO PIB per capita da primeira carta e de %.2f \nO vencedor e a segunda carta com o PIB per capita de %.2f.\n", pibc2, pib1, pibc2);
    }
    if (pibc1 == pibc2) {
        printf("O PIB per capita da primeira carta e de %.2f \nO PIB per capita da segunda carta e de %.2f \nHouve um empate tente outros atributos.\n", pibc1, pibc2);
    }
    
return 0;
}
