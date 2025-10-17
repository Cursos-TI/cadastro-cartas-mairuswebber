#include <stdio.h>
#include <locale.h>
#include <string.h>

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
    int numatresco;
    char atresco[33];

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

    printf(" Estado [A] Rio de Janeiro, [B] São Paulo, [C] Minas Gerais, [D] Espírito Santo, [E] Paraná, [F] Santa Catarina, [G] Rio Grande do Sul, [H] Bahia: ");
    scanf(" %c", &estado1);
    printf("  Você digitou: %c\n", estado1);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %d", &codcarta1);
    printf("  Você digitou: %.2d\n", codcarta1);

    getchar();
    printf(" Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("  Você digitou: %s, que é uma linda cidade mesmo.\n", cidade1);

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

    printf(" Estado [A] Rio de Janeiro, [B] São Paulo, [C] Minas Gerais, [D] Espírito Santo, [E] Paraná, [F] Santa Catarina, [G] Rio Grande do Sul, [H] Bahia: ");
    scanf(" %c", &estado2);
    printf("  Você digitou: %c\n", estado2);

    printf(" Código da Carta (01, 02, 03 ou 04): ");
    scanf(" %d", &codcarta2);
    printf("  Você digitou: %.2d\n", codcarta2);

    getchar();
    printf(" Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("  Você digitou: %s, que é uma linda cidade mesmo.\n", cidade2);

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
    printf(" Pib Per Capita: R$ %lu/hab\n\n", pibpercap1);

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
    printf(" Pib Per Capita: R$ %lu/hab\n\n", pibpercap2);

    printf(" ========================================== \n *** Escolha o atributo a ser comparado *** \n ------------------------------------------\n\n");
    printf(" [1] População, [2] Área, [3] Pib, [4] Pontos turísticos, [5] Densidade populacional, [6] Pib per capita: ");
    scanf(" %d", &numatresco);
    switch (numatresco) {
        case 1:
        strcpy(atresco, "População");
        printf(" O atributo escolhido foi %s.\n", atresco);
        if (pop1 == pop2) {
            printf ("O impossível aconteceu: deu empate!\n\n");
        } else if (pop1 > pop2) {
            printf(" A carta vencedora foi %c%.2d - %s, com a população de %lu habitantes, contra a população de %lu habitantes da carta %c%.2d - %s, a populosa perdedora.\n\n", estado1, codcarta1, cidade1, pop1, pop2, estado2, codcarta2, cidade2);
            } else {
            printf(" A carta vencedora foi %c%.2d - %s, com a população de %lu habitantes, contra a população de %lu habitantes da carta %c%.2d - %s, a populosa perdedora.\n\n", estado2, codcarta2, cidade2, pop2, pop1, estado1, codcarta1, cidade1);
            }
        break;
        case 2:    
        strcpy(atresco, "Área");
        printf(" O atributo escolhido foi %s.\n", atresco);
        if (area1 == area2) {
            printf ("Incrível! As duas cidades tem o mesmo tamanho... deu empate!\n\n");
        } else if (area1 > area2) {
            printf(" A carta vencedora foi %c%.2d - %s, com a área de %.3f km2, contra a area de %.3f km2 da carta %c%.2d - %s, gigantesca, porém perdedora.\n\n", estado1, codcarta1, cidade1, area1, area2, estado2, codcarta2, cidade2);
            } else {
            printf(" A carta vencedora foi %c%.2d - %s, com a área de %.3f km2, contra a area de %.3f km2 da carta %c%.2d - %s, gigantesca, porém perdedora.\n\n", estado2, codcarta2, cidade2, area2, area1, estado1, codcarta1, cidade1);
            }
        break; 
        case 3:    
        strcpy(atresco, "Pib");
        printf(" O atributo escolhido foi %s.\n", atresco);
        if (pib1 == pib2) {
            printf ("Impossível... deu empate!\n\n");
        } else if (area1 > area2) {
            printf(" A carta vencedora foi %c%.2d - %s, com o Pib de R$ %lu, contra R$ %lu da carta %c%.2d - %s, igualmente riquíssima, porém perdedora.\n\n", estado1, codcarta1, cidade1, pib1, pib2, estado2, codcarta2, cidade2);
            } else {
            printf(" A carta vencedora foi %c%.2d - %s, com o Pib de R$ %lu, contra R$ %lu da carta %c%.2d - %s, igualmente riquíssima, porém perdedora.\n\n", estado2, codcarta2, cidade2, pib2, pib1, estado1, codcarta1, cidade1);
            }
        break; 
        case 4:    
        strcpy(atresco, "Quantidade de pontos turísticos");
        printf(" O atributo escolhido foi %s.\n", atresco);
        if (numpontur1 == numpontur2) {
            printf ("Deu empate. As duas lindas cidades tem a mesma quantidade de pontos turísticos.\n\n");
        } else if (numpontur1 > numpontur2) {
            printf(" A carta vencedora foi %c%.2d - %s, com %d pontos turísticos, contra %d da carta %c%.2d - %s, que é também belíssima, porém perdedora.\n\n", estado1, codcarta1, cidade1, numpontur1, numpontur2, estado2, codcarta2, cidade2);
            } else {
            printf(" A carta vencedora foi %c%.2d - %s, com %d pontos turísticos, contra %d da carta %c%.2d - %s, que é também belíssima, porém perdedora.\n\n", estado2, codcarta2, cidade2, numpontur2, numpontur1, estado1, codcarta1, cidade1);
            }
        break; 
        case 5:    
        strcpy(atresco, "Densidade populacional");
        printf(" O atributo escolhido foi %s.\n", atresco);
        if (denpop1 == denpop2) {
            printf ("Deu empate. As duas lindas cidades são igualmente espaçosas.\n\n");
        } else if (denpop1 < denpop2) {
            printf(" A carta vencedora foi %c%.2d - %s, com densidade populacional de %f, mais espaçosa portanto que os %f da carta %c%.2d - %s.\n\n", estado1, codcarta1, cidade1, denpop1, denpop2, estado2, codcarta2, cidade2);
            } else {
            printf(" A carta vencedora foi %c%.2d - %s, com densidade populacional de %f, mais espaçosa portanto que os %f da carta %c%.2d - %s.\n\n", estado2, codcarta2, cidade2, denpop2, denpop1, estado1, codcarta1, cidade1);
            }
        break;  
        case 6:    
        strcpy(atresco, "Pib per capita");
        printf(" O atributo escolhido foi %s.\n", atresco);
        if (pibpercap1 == pibpercap2) {
            printf ("Deu empate. As duas cidades tem os habitantes igualmente milionários.\n\n");
        } else if (pibpercap1 > pibpercap2) {
            printf(" A carta vencedora foi %c%.2d - %s, com o pib de R$ %lu por habitante, quando comparada com os R$ %lu por habitante da carta %c%.2d - %s, cujos populares são igualmente abonados.\n\n", estado1, codcarta1, cidade1, pibpercap1, pibpercap2, estado2, codcarta2, cidade2);
            } else {
            printf(" A carta vencedora foi %c%.2d - %s, com o pib de R$ %lu por habitante, quando comparada com os R$ %lu por habitante da carta %c%.2d - %s, cujos populares são igualmente abonados.\n\n", estado2, codcarta2, cidade2, pibpercap2, pibpercap1, estado1, codcarta1, cidade1);
            }
        break; 
        default: printf("Opção inválida, sinto muito. Rode o programa e preencha tudo de novo, para deixar de ser burro.\n\n");
    }
    return 0;

}

