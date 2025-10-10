#include <stdio.h>
#include <locale.h> //para funcionarem os caracteres acentuados

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  setlocale(LC_ALL, ""); //para funcionarem os caracteres acentuados

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codcarta1[2], codcarta2[2];
    int tamcodcarta = 2; 
    char cidade1[30], cidade2[30];
    int pop1 = 0, pop2 = 0;
    float area1 = 0, area2 = 0;
    float pib1 = 0, pib2 = 0;
    int numpontur1 = 0, numpontur2 = 0;

  // Área para entrada de dados

    //entradas dos dados da primeira carta
    
    printf(" ================================== \n CADASTRO DE CARTAS DO SUPER TRUNFO \n ================================== \n\n Digite os dados da primeira carta: \n ----------------------------------\n");

    printf(" Estado (A - Rio de Janeiro, B - São Paulo, C - Minas Gerais, D - Espírito Santo, E - Paraná, F - Santa Catarina, G - Rio Grande do Sul, H - Bahia): ");
    scanf(" %c", &estado1);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %s", codcarta1);

    getchar();
    printf(" Nome da Cidade: ");
    fgets(cidade1,30,stdin);

    printf(" População: ");
    scanf(" %d", &pop1);

    printf(" Área (km2): ");
    scanf(" %f", &area1);

    printf(" Pib: ");
    scanf(" %f", &pib1);

    printf(" Número de Pontos Turísticos: ");
    scanf(" %d", &numpontur1);

    printf("\n");

    //entradas dos dados da segunda carta

    printf(" Digite os dados da segunda carta: \n ---------------------------------\n");

    printf(" Estado (A - Rio de Janeiro, B - São Paulo, C - Minas Gerais, D - Espírito Santo, E - Paraná, F - Santa Catarina, G - Rio Grande do Sul, H - Bahia): ");
    scanf(" %c", &estado2);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %s", codcarta2);

    getchar();
    printf(" Nome da Cidade: ");
    fgets(cidade2,30,stdin);

    printf(" População: ");
    scanf(" %d", &pop2);

    printf(" Área (km2): ");
    scanf(" %f", &area2);

    printf(" Pib: ");
    scanf(" %f", &pib2);

    printf(" Número de Pontos Turísticos: ");
    scanf(" %d", &numpontur2);

    printf("\n\n");

  // Área para exibição dos dados das cidades

    printf(" =================== \n Cartas Cadastradas: \n -------------------\n\n");

    //Exibição da primeira carta

    printf(" Carta 1\n -------\n");
    printf(" Estado: %c\n", estado1);
    printf(" Código: %c%s\n", estado1, codcarta1);
    printf(" Cidade: %s", cidade1);
    printf(" População: %d hab.\n", pop1);
    printf(" Área: %.2f m2\n", area1);
    printf(" Pib: R$ %.2f\n", pib1);
    printf(" Pontos Turísticos: %d \n\n", numpontur1); 

    //Exibição da segunda carta

    printf(" Carta 2\n -------\n");
    printf(" Estado: %c\n", estado2);
    printf(" Código: %c%s\n", estado2, codcarta2);
    printf(" Cidade: %s", cidade2);
    printf(" População: %d hab.\n", pop2);
    printf(" Área: %.2f m2\n", area2);
    printf(" Pib: R$ %.2f\n", pib2);
    printf(" Pontos Turísticos: %d\n\n", numpontur2);

return 0;
} 
