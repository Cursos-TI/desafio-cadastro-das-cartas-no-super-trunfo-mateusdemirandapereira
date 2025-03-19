#include <stdio.h>



int main() {

	char estado;
	char codigoDaCarta[3];
	char nomeDaCidade[50];
	unsigned long int populacao;
	float area;
	float pib;
	int numeroDePontosTuristicos;
	float densidadePopulacional;
	float pibPercapita;

	printf("Informe os dados da Carta 1: \n");
	printf("Digite o estado\n");
	scanf("%c", &estado);

	printf("Digite o codigo da Carta\n");
	scanf("%s", codigoDaCarta);

	printf("Digite o Nome da Cidade\n");
	scanf("%s", nomeDaCidade);

	printf("Digite a quantidade de habitantes\n");
	scanf("%ld", &populacao);

	printf("Digite a area da Cidade\n");
	scanf("%f", &area);

	printf("Digite o pib da Cidade\n");
	scanf("%f", &pib);


	printf("Digite o numero de pontos Turisticos\n");
	scanf("%d", &numeroDePontosTuristicos);


	densidadePopulacional = (float) populacao / area;
	pibPercapita = (float) pib / populacao;

	float superPoder = (float) populacao + area + pib + numeroDePontosTuristicos + pibPercapita + (densidadePopulacional * -1);


			
	char estado2;
	char codigoDaCarta2[3];
	char nomeDaCidade2[50];
	unsigned long int populacao2;
	float area2;
	float pib2;
	int numeroDePontosTuristicos2;
	float densidadePopulacional2;
	float pibPercapita2;

	printf("Informe os dados da Carta 2: \n");
	printf("Digite o estado\n");
	scanf(" %c", &estado2);

	printf("Digite o codigo da Carta\n");
	scanf("%s", codigoDaCarta2);

	printf("Digite o Nome da Cidade\n");
	scanf("%s", nomeDaCidade2);

	printf("Digite a quantidade de habitantes\n");
	scanf("%ld", &populacao2);

	printf("Digite a area da Cidade\n");
	scanf("%f", &area2);

	printf("Digite o pib da Cidade\n");
	scanf("%f", &pib2);

	printf("Digite o numero de pontos Turisticos\n");
	scanf("%d", &numeroDePontosTuristicos2);


	densidadePopulacional2 = (float) populacao2 / area2;
	pibPercapita2 = (float) pib2 / populacao2;

	float superPoder2 = (float) populacao2 + area2 + pib2 + numeroDePontosTuristicos2 + pibPercapita2 + (densidadePopulacional2 * -1);


	printf("Carta 1:\n");
	printf("Estado: %c\n", estado);
	printf("Codigo %s\n", codigoDaCarta);
	printf("Nome da Cidade: %s\n", nomeDaCidade);
	printf("Populacao: %ld\n", populacao);

	printf("Area: %.2f Km²\n", area);
	printf("PIB: %.2f bilhoes de reais\n", pib);
	printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos);
	printf("Densidade Populaciona: %.2f hab/km²\n", densidadePopulacional);
	printf("PIB per Capita: %.2f reais\n",pibPercapita);


	



	printf("\n");

	printf("Carta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo %s\n", codigoDaCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("Populacao: %ld\n", populacao2);

	printf("Area: %.2f Km²\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos2);
	printf("Densidade Populaciona: %.2f hab/km²\n", densidadePopulacional2);
	printf("PIB per Capita: %.2f reais\n",pibPercapita2);



	printf("\n\n");
	printf("Comparação de Cartas:\n");

	printf("População: Carta %d venceu (%d)\n", 1, populacao > populacao2);
	printf("Área: Carta %d venceu (%d)\n", 1, area > area2);
	printf("PIB: Carta %d venceu (%d)\n", 1, pib > pib2);
	printf("Pontos Turisticos: Carta %d venceu (%d)\n", 1, numeroDePontosTuristicos > numeroDePontosTuristicos2);
	printf("Densidade Populacional: Carta %d venceu (%d)\n", 1, densidadePopulacional  < densidadePopulacional2);
	printf("PIB per Capita: carta %d venceu (%d)\n", 1, pibPercapita > pibPercapita2);
	printf("Super Poder: Carta %d venceu (%d)\n",1, superPoder > superPoder2);

	printf("\n");

	printf("População: Carta %d venceu (%d)\n", 2, populacao < populacao2);
	printf("Área: Carta %d venceu (%d)\n", 2, area < area2);
	printf("PIB: Carta %d venceu (%d)\n", 2, pib < pib2);
	printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2, numeroDePontosTuristicos < numeroDePontosTuristicos2);
	printf("Densidade Populacional: Carta %d venceu (%d)\n", 2, densidadePopulacional  < densidadePopulacional2);
	printf("PIB per Capita: carta %d venceu (%d)\n", 2, pibPercapita < pibPercapita2);
	printf("Super Poder: Carta %d venceu (%d)\n",2, superPoder < superPoder2);



	return 0;
}

