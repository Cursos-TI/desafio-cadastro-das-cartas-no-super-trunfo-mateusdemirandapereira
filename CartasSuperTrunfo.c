#include <stdio.h>



int main() {

	char estado;
	char codigoDaCarta[3];
	char nomeDaCidade[50];
	int populacao;
	float area;
	float pib;
	int numeroDePontosTuristicos;

	printf("Informe os dados da Carta 1: \n");
	printf("Digite o estado\n");
	scanf("%c", &estado);

	printf("Digite o codigo da Carta\n");
	scanf("%s", codigoDaCarta);

	printf("Digite o Nome da Cidade\n");
	scanf("%s", nomeDaCidade);

	printf("Digite a quantidade de habitantes\n");
	scanf("%d", &populacao);

	printf("Digite a area da Cidade\n");
	scanf("%f", &area);

	printf("Digite o pib da Cidade\n");
	scanf("%f", &pib);

	printf("Digite o numero de pontos Turisticos\n");
	scanf("%d", &numeroDePontosTuristicos);


			
	char estado2;
	char codigoDaCarta2[3];
	char nomeDaCidade2[50];
	int populacao2;
	float area2;
	float pib2;
	int numeroDePontosTuristicos2;

	printf("Informe os dados da Carta 2: \n");
	printf("Digite o estado\n");
	scanf(" %c", &estado2);

	printf("Digite o codigo da Carta\n");
	scanf("%s", codigoDaCarta2);

	printf("Digite o Nome da Cidade\n");
	scanf("%s", nomeDaCidade2);

	printf("Digite a quantidade de habitantes\n");
	scanf("%d", &populacao2);

	printf("Digite a area da Cidade\n");
	scanf("%f", &area2);

	printf("Digite o pib da Cidade\n");
	scanf("%f", &pib2);

	printf("Digite o numero de pontos Turisticos\n");
	scanf("%d", &numeroDePontosTuristicos2);

	printf("Carta 1:\n");
	printf("Estado: %c\n", estado);
	printf("Codigo %s\n", codigoDaCarta);
	printf("Nome da Cidade: %s\n", nomeDaCidade);
	printf("Populacao: %d\n", populacao);

	printf("Area: %.2f Km²\n", area);
	printf("PIB: %.2f bilhoes de reais\n", pib);
	printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos);

	printf("\n");

	printf("Carta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo %s\n", codigoDaCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("Populacao: %d\n", populacao2);

	printf("Area: %.2f Km²\n", area2);
	printf("PIB: %.2f bilhoes de reais\n", pib2);
	printf("Numero de Pontos Turisticos: %d\n", numeroDePontosTuristicos2);



	return 0;
}

