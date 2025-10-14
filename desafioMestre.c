#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); //para funcionarem os caracteres acentuados

    //variaveis das duas cartas
    char estado1, estado2;
    int codcarta1 = 0, codcarta2 = 0;
    char cidade1[30], cidade2[30];
    unsigned long int pop1 = 0, pop2 = 0;
    float area1 = 0, area2 = 0;
    unsigned long int pib1 = 0, pib2 = 0;
    int numpontur1 = 0, numpontur2 = 0;
    float denpop1 = 0, denpop2 = 0;
    unsigned long int pibpercap1 = 0, pibpercap2 = 0;
    unsigned long int superpoder1 = 0, superpoder2 = 0;

    /*Especificadores: 
    %d: (int) Imprime um inteiro no formato decimal.
    %i: (int) Equivalente a %d.
    %f: (float) Imprime um número de ponto flutuante no formato padrão.
    %e: (float) Imprime um número de ponto flutuante na notação científica.
    %c: (char) Imprime um único caractere.
    %s: (char[*]) Imprime uma cadeia (string) de caracteres.
    %lu: (unsigned long int) Valores muito grandes positivos.
    */

    //entradas dos dados da primeira carta
    
    printf(" ================================== \n CADASTRO DE CARTAS DO SUPER TRUNFO \n ================================== \n\n Digite os dados da primeira carta: \n ----------------------------------\n");

    printf(" Estado (A - Rio de Janeiro, B - São Paulo, C - Minas Gerais, D - Espírito Santo, E - Paraná, F - Santa Catarina, G - Rio Grande do Sul, H - Bahia): ");
    scanf(" %c", &estado1);
    printf("  Você digitou: %c\n", estado1);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %d", &codcarta1);
    printf("  Você digitou: %.2d\n", codcarta1);

    getchar();
    printf(" Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("  Você digitou: %s", cidade1);

    printf(" População: ");
    scanf(" %lu", &pop1);
    printf("  Você digitou: %lu\n", pop1);

    getchar();
    printf(" Área (km2): ");
    scanf(" %f", &area1);
    printf("  Você digitou: %.3f\n", area1);

    getchar();
    printf(" Pib: ");
    scanf(" %lu", &pib1);
    printf("  Você digitou: %lu\n", pib1);

    getchar();
    printf(" Número de Pontos Turísticos: ");
    scanf(" %d", &numpontur1);
    printf("  Você digitou: %d\n", numpontur1);

    printf("\n");

    //entradas dos dados da segunda carta

    printf(" Digite os dados da segunda carta: \n ---------------------------------\n");

    printf(" Estado (A - Rio de Janeiro, B - São Paulo, C - Minas Gerais, D - Espírito Santo, E - Paraná, F - Santa Catarina, G - Rio Grande do Sul, H - Bahia): ");
    scanf(" %c", &estado2);
    printf("  Você digitou: %c\n", estado2);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %d", &codcarta2);
    printf("  Você digitou: %.2d\n", codcarta2);

    getchar();
    printf(" Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("  Você digitou: %s", cidade2);

    printf(" População: ");
    scanf(" %lu", &pop2);
    printf("Você digitou: %lu\n", pop2);

    getchar();
    printf(" Área (km2): ");
    scanf(" %f", &area2);
    printf("Você digitou: %.3f\n", area2);

    getchar();
    printf(" Pib: ");
    scanf(" %lu", &pib2);
    printf("Você digitou: %lu\n", pib2);

    getchar();
    printf(" Número de Pontos Turísticos: ");
    scanf(" %d", &numpontur2);
    printf("Você digitou: %d\n", numpontur2);

    printf("\n\n");

    //variaveis das novas informações

    denpop1 = (float) pop1 / area1; // declaração da variável para armazenar a densidade populacional.
    pibpercap1 = (unsigned long int) pib1 / pop1; // declaração da variável para armazenar o PIB per capita.
    denpop2 = (float) pop2 / area2; // declaração da variável para armazenar a densidade populacional.
    pibpercap2 = (unsigned long int) pib2 / pop2; // declaração da variável para armazenar o PIB per capita.
    superpoder1 = (unsigned long int) pop1 + area1 + pib1 + (100000000 / denpop1) + pibpercap1;
    superpoder2 = (unsigned long int) pop2 + area2 + pib2 + (100000000 / denpop2) + pibpercap2;
    
    //Exibição da primeira carta

    printf(" =================== \n Cartas Cadastradas: \n -------------------\n\n");

    printf(" Carta 1\n -------\n");
    printf(" Estado: %c\n", estado1);
    printf(" Código: %c%.2d\n", estado1, codcarta1);
    printf(" Cidade: %s", cidade1);
    printf(" População: %lu hab.\n", pop1);
    printf(" Área: %.3f km2\n", area1);
    printf(" Pib: R$ %lu\n", pib1);
    printf(" Pontos Turísticos: %d \n", numpontur1); 
    printf(" Densidade Populacional: %f hab/km2\n", denpop1);
    printf(" Pib Per Capita: R$ %lu/hab\n", pibpercap1);
    printf(" Super Poder: %lu\n\n", superpoder1);

    //Exibição da segunda carta

    printf(" Carta 2\n -------\n");
    printf(" Estado: %c\n", estado2);
    printf(" Código: %c%.2d\n", estado2, codcarta2);
    printf(" Cidade: %s", cidade2);
    printf(" População: %lu hab.\n", pop2);
    printf(" Área: %.3f km2\n", area2);
    printf(" Pib: R$ %lu\n", pib2);
    printf(" Pontos Turísticos: %d\n", numpontur2); 
    printf(" Densidade Populacional: %f hab/km2\n", denpop2);
    printf(" Pib Per Capita: R$ %lu/hab\n", pibpercap2);
    printf(" Super Poder: %lu\n\n", superpoder2);

    return 0;
    
}
