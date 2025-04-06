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
	int atributo;

	printf("Informe os dados da Carta 1: \n");
	printf("Digite o estado\n");
	scanf("%s", &estado);

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

	float superPoder = (float) populacao + area + pib + numeroDePontosTuristicos
			+ pibPercapita + (densidadePopulacional * -1);

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
	scanf(" %s", &estado2);

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

	float superPoder2 = (float) populacao2 + area2 + pib2
			+ numeroDePontosTuristicos2 + pibPercapita2
			+ (densidadePopulacional2 * -1);

	printf("Informe qual será o atributos para comparação!\n");
	printf("1 - População\n");
	printf("2 - Área\n");
	printf("3 - PIB\n");
	printf("4 - Pontos turísticos\n");
	printf("5 - Densidade demográfica\n");

	scanf(" %d", &atributo);

	switch (atributo) {
	case 1:
		if (populacao > populacao2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: População\n");
			printf(
					"População da Cidade de %s: %ld - População da Cidade de %s: %ld\n",
					nomeDaCidade, populacao, nomeDaCidade2, populacao2);
			printf("Carta %s venceu!\n", codigoDaCarta);

		} else if (populacao < populacao2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: População\n");
			printf(
					"População da Cidade de %s: %ld - População da Cidade de %s: %ld\n",
					nomeDaCidade, populacao, nomeDaCidade2, populacao2);
			printf("Carta %s venceu!\n", codigoDaCarta2);

		} else {
			printf("Empate!");
		}
		break;
	case 2:
		if (area > area2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: Área\n");
			printf("Área da Cidade de %s: %.2f - Área da Cidade de %s: %.2f\n",
					nomeDaCidade, area, nomeDaCidade2, area2);
			printf("Carta %s venceu!\n", codigoDaCarta);

		} else if (area < area2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: Área\n");
			printf("Área da Cidade de %s: %.2f - Área da Cidade de %s: %.2f\n",
					nomeDaCidade, area, nomeDaCidade2, area2);
			printf("Carta %s venceu!\n", codigoDaCarta2);

		} else {
			printf("Empate!");
		}
		break;
	case 3:
		if (pib > pib2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: PIB\n");
			printf("PIB da Cidade de %s: %.2f - PIB da Cidade de %s: %.2f\n",
					nomeDaCidade, pib, nomeDaCidade2, pib2);
			printf("Carta %s venceu!\n", codigoDaCarta);

		} else if (pib < pib2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: PIB\n");
			printf("PIB da Cidade de %s: %.2f - PIB da Cidade de %s: %.2f\n",
					nomeDaCidade, pib, nomeDaCidade2, pib2);
			printf("Carta %s venceu!\n", codigoDaCarta2);

		} else {
			printf("Empate!");
		}
		break;

	case 4:

		if (numeroDePontosTuristicos > numeroDePontosTuristicos2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: Pontos Turisticos\n");
			printf(
					"Pontos Turisticos da Cidade de %s: %d - Pontos Turisticos da Cidade de %s: %d\n",
					nomeDaCidade, numeroDePontosTuristicos, nomeDaCidade2,
					numeroDePontosTuristicos2);
			printf("Carta %s venceu!\n", codigoDaCarta);

		} else if (numeroDePontosTuristicos < numeroDePontosTuristicos2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: Pontos Turisticos\n");
			printf(
					"Pontos Turisticos da Cidade de %s: %d - Pontos Turisticos da Cidade de %s: %d\n",
					nomeDaCidade, numeroDePontosTuristicos, nomeDaCidade2,
					numeroDePontosTuristicos2);
			printf("Carta %s venceu!\n", codigoDaCarta2);

		} else {
			printf("Empate!");
		}
		break;

	case 5:
		if (densidadePopulacional < densidadePopulacional2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: Densidade Populacional\n");
			printf(
					"Densidade Populacional da Cidade de %s: %.2f - Densidade Populacional da Cidade de %s: %.2f\n",
					nomeDaCidade, densidadePopulacional, nomeDaCidade2,
					densidadePopulacional2);
			printf("Carta %s venceu!\n", codigoDaCarta);

		} else if (densidadePopulacional > densidadePopulacional2) {
			printf("Cidade: %s - Cidade: %s\n", nomeDaCidade, nomeDaCidade2);
			printf("Atributo para comparação: Densidade Populacional\n");
			printf(
					"Densidade Populacional da Cidade de %s: %.2f - Densidade Populacional da Cidade de %s: %.2f\n",
					nomeDaCidade, densidadePopulacional, nomeDaCidade2,
					densidadePopulacional2);
			printf("Carta %s venceu!\n", codigoDaCarta2);

		} else {
			printf("Empate!");
		}
		break;

	default:
		printf("Opção invalida!");
		break;

	}








	return 0;
}

