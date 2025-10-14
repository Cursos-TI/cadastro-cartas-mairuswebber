#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); //para funcionarem os caracteres acentuados

    //variaveis das duas cartas
    char estado1, estado2;
    char codcarta1[2], codcarta2[2];
    char cidade1[30], cidade2[30];
    int pop1 = 0, pop2 = 0;
    float area1 = 0, area2 = 0;
    float pib1 = 0, pib2 = 0;
    int numpontur1 = 0, numpontur2 = 0;

    /*Especificadores: 
    %d: (int) Imprime um inteiro no formato decimal.
    %i: (int) Equivalente a %d.
    %f: (float) Imprime um número de ponto flutuante no formato padrão.
    %e: (float) Imprime um número de ponto flutuante na notação científica.
    %c: (char) Imprime um único caractere.
    %s: (char[*] Imprime uma cadeia (string) de caracteres.
    */

    //entradas dos dados da primeira carta
    
    printf(" ================================== \n CADASTRO DE CARTAS DO SUPER TRUNFO \n ================================== \n\n Digite os dados da primeira carta: \n ----------------------------------\n");

    printf(" Estado (A - Rio de Janeiro, B - São Paulo, C - Minas Gerais, D - Espírito Santo, E - Paraná, F - Santa Catarina, G - Rio Grande do Sul, H - Bahia): ");
    scanf(" %c", &estado1);
    printf("  Você digitou: %c\n", estado1);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %s", codcarta1);
    printf("  Você digitou: %s\n", codcarta1);

    printf(" Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("  Você digitou: %s", cidade1);

    printf(" População: ");
    scanf(" %d", &pop1);
    printf("  Você digitou: %d\n", pop1);

    printf(" Área (km2): ");
    scanf(" %f", &area1);
    printf("  Você digitou: %.2f\n", area1);

    printf(" Pib: ");
    scanf(" %f", &pib1);
    printf("  Você digitou: %.2f\n", pib1);

    printf(" Número de Pontos Turísticos: ");
    scanf(" %d", &numpontur1);
    printf("  Você digitou: %d\n", numpontur1);

    printf("\n");

    //entradas dos dados da segunda carta

    printf(" Digite os dados da segunda carta: \n ---------------------------------\n");

    printf(" Estado (A - Rio de Janeiro, B - São Paulo, C - Minas Gerais, D - Espírito Santo, E - Paraná, F - Santa Catarina, G - Rio Grande do Sul, H - Bahia): ");
    scanf(" %c", &estado2);
    printf("  Você digitou: %c\n", estado2);
    printf("  Na primeira carta: %c\n", estado1);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %s", codcarta2);
    printf("  Você digitou: %s\n", codcarta2);
    printf("  Na primeira carta: %s\n", codcarta1);

    printf(" Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("  Você digitou: %s", cidade2);
    printf("  Na primeira carta: %s", cidade1);

    printf(" População: ");
    scanf(" %d", &pop2);
    printf("Você digitou: %d\n", pop2);
    printf("  Na primeira carta: %d\n", pop1);

    printf(" Área (km2): ");
    scanf(" %f", &area2);
    printf("Você digitou: %.2f\n", area2);
    printf("  Na primeira carta: %.2f\n", area1);

    printf(" Pib: ");
    scanf(" %f", &pib2);
    printf("Você digitou: %.2f\n", pib2);
    printf("  Na primeira carta: %.2f\n", pib1);

    printf(" Número de Pontos Turísticos: ");
    scanf(" %d", &numpontur2);
    printf("Você digitou: %d\n", numpontur2);
    printf("  Na primeira carta: %d\n", numpontur1);

    printf("\n\n");
    
    //Exibição da primeira carta

    printf(" =================== \n Cartas Cadastradas: \n -------------------\n\n");

    printf(" Carta 1\n -------\n");
    printf(" Estado: %c\n", estado1);
    printf(" Código: %c%s\n", estado1, codcarta1);
    printf(" Cidade: %s\n", cidade1);
    printf(" População: %d hab.\n", pop1);
    printf(" Área: %.2f km2\n", area1);
    printf(" Pib: R$ %.2f\n", pib1);
    printf(" Pontos Turísticos: %d \n", numpontur1); 
    float denpop1 = (float) pop1 / area1; // declaração da variável para armazenar a densidade populacional.
    printf(" Densidade Populacional: %.2f hab/km2\n", denpop1);
    float pibpercap1 = (float) pib1 / pop1; // declaração da variável para armazenar o PIB per capita.
    printf(" Pib Per Capita: %.2f Pib/hab\n\n", pibpercap1);

    //Exibição da segunda carta

    printf(" Carta 2\n -------\n");
    printf(" Estado: %c\n", estado2);
    printf(" Código: %c%s\n", estado2, codcarta2);
    printf(" Cidade: %s\n", cidade2);
    printf(" População: %d hab.\n", pop2);
    printf(" Área: %.2f km2\n", area2);
    printf(" Pib: R$ %.2f\n", pib2);
    printf(" Pontos Turísticos: %d\n", numpontur2); 
    float denpop2 = (float) pop2 / area2; // declaração da variável para armazenar a densidade populacional.
    printf(" Densidade Populacional: %.2f hab/km2\n", denpop2);
    float pibpercap2 = (float) pib2 / pop2; // declaração da variável para armazenar o PIB per capita.
    printf(" Pib Per Capita: %.2f Pib/hab\n\n", pibpercap2);

    return 0;
    
}
