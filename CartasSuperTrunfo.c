#include <stdio.h>
#include <string.h>

int main() {

    char estado[30];
    char codigoDaCarta[4]; // Para 3 caracteres + '\0'
    char nomeDaCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;
    float densidadePopulacional;
    float pibPercapita;

    printf("Informe os dados da Carta 1: \n");
    printf("Digite o estado\n");
    scanf("%s", estado);  // Não precisa do & em arrays de char

    printf("Digite o codigo da Carta\n");
    scanf("%s", codigoDaCarta);

    printf("Digite o Nome da Cidade\n");
    scanf("%s", nomeDaCidade);

    printf("Digite a quantidade de habitantes\n");
    scanf("%lu", &populacao);

    printf("Digite a area da Cidade\n");
    scanf("%f", &area);

    printf("Digite o pib da Cidade\n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos Turisticos\n");
    scanf("%d", &numeroDePontosTuristicos);

    densidadePopulacional = (float) populacao / area;
    pibPercapita = (float) pib / populacao;

    float superPoder = (float) populacao + area + pib + numeroDePontosTuristicos
            + pibPercapita - densidadePopulacional;

    char estado2[30];
    char codigoDaCarta2[4];
    char nomeDaCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;
    float densidadePopulacional2;
    float pibPercapita2;

    printf("Informe os dados da Carta 2: \n");
    printf("Digite o estado\n");
    scanf("%s", estado2);

    printf("Digite o codigo da Carta\n");
    scanf("%s", codigoDaCarta2);

    printf("Digite o Nome da Cidade\n");
    scanf("%s", nomeDaCidade2);

    printf("Digite a quantidade de habitantes\n");
    scanf("%lu", &populacao2);

    printf("Digite a area da Cidade\n");
    scanf("%f", &area2);

    printf("Digite o pib da Cidade\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos Turisticos\n");
    scanf("%d", &numeroDePontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPercapita2 = (float) pib2 / populacao2;

    float superPoder2 = (float) populacao2 + area2 + pib2
            + numeroDePontosTuristicos2 + pibPercapita2
            - densidadePopulacional2;

    int atributo1, atributo2;
    printf("Você tem que informar dois atributos para comparação!\n");
    printf("Informe qual será o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    scanf("%d", &atributo1);

    int resultado1;
    char atributoNome1[30];
    float valorCartaA1;
    float valorCartaB1;

    int resultado2;
    char atributoNome2[30];
    float valorCartaA2;
    float valorCartaB2;

    switch(atributo1) {
        case 1:
            resultado1 = populacao > populacao2;
            strcpy(atributoNome1, "Populacao");
            valorCartaA1 = populacao;
            valorCartaB1 = populacao2;
            break;
        case 2:
            resultado1 = area > area2;
            strcpy(atributoNome1, "Area");
            valorCartaA1 = area;
            valorCartaB1 = area2;
            break;
        case 3:
            resultado1 = pib > pib2;
            strcpy(atributoNome1, "PIB");
            valorCartaA1 = pib;
            valorCartaB1 = pib2;
            break;
        case 4:
            resultado1 = numeroDePontosTuristicos > numeroDePontosTuristicos2;
            strcpy(atributoNome1, "Pontos Turisticos");
            valorCartaA1 = numeroDePontosTuristicos;
            valorCartaB1 = numeroDePontosTuristicos2;
            break;
        case 5:
            resultado1 = densidadePopulacional < densidadePopulacional2;
            strcpy(atributoNome1, "Densidade Populacional");
            valorCartaA1 = densidadePopulacional;
            valorCartaB1 = densidadePopulacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Informe qual será o segundo atributo para comparação:\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Atributo inválido! Tente novamente.\n");
        return 1;
    }

    switch(atributo2) {
        case 1:
            resultado2 = populacao > populacao2;
            strcpy(atributoNome2, "Populacao");
            valorCartaA2 = populacao;
            valorCartaB2 = populacao2;
            break;
        case 2:
            resultado2 = area > area2;
            strcpy(atributoNome2, "Area");
            valorCartaA2 = area;
            valorCartaB2 = area2;
            break;
        case 3:
            resultado2 = pib > pib2;
            strcpy(atributoNome2, "PIB");
            valorCartaA2 = pib;
            valorCartaB2 = pib2;
            break;
        case 4:
            resultado2 = numeroDePontosTuristicos > numeroDePontosTuristicos2;
            strcpy(atributoNome2, "Pontos Turisticos");
            valorCartaA2 = numeroDePontosTuristicos;
            valorCartaB2 = numeroDePontosTuristicos2;
            break;
        case 5:
            resultado2 = densidadePopulacional < densidadePopulacional2;
            strcpy(atributoNome2, "Densidade Populacional");
            valorCartaA2 = densidadePopulacional;
            valorCartaB2 = densidadePopulacional2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("\nNome dos Estados das Cartas:\n");
    printf("Carta1: %s\n", estado);
    printf("Carta2: %s\n", estado2);
    printf("Atributos para comparação: %s, %s\n", atributoNome1, atributoNome2);
    printf("Valores de cada atributo para cada carta:\n");
    printf("Atributo %s da carta1: %.2f\n", atributoNome1, valorCartaA1);
    printf("Atributo %s da carta1: %.2f\n", atributoNome2, valorCartaA2);
    printf("Atributo %s da carta2: %.2f\n", atributoNome1, valorCartaB1);
    printf("Atributo %s da carta2: %.2f\n", atributoNome2, valorCartaB2);
    printf("Soma dos atributos carta1: %.2f\n",  valorCartaA1 + valorCartaA2);
    printf("Soma dos atributos carta2: %.2f\n",  valorCartaB1 + valorCartaB2);

    if(resultado1 && resultado2) {
        printf("Carta1 venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");
    } else {
        printf("Carta2 venceu!\n");
    }

    return 0;
}
