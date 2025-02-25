#include <stdio.h>

int main() {

    // Variaveis
    char estado = 'A';
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area_cidade;
    float PIB;
    int pontos_turistico;

    char estado2 = 'A';
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area_cidade2;
    float PIB2;
    int pontos_turistico2;

    printf("CADASTRE CARTAS SUPER TRUNFO!\n");

    //Cadastro 1° Carta    
    printf("Digite os dados da 1° Carta\n");
    printf("Estado (A a H) :");
    scanf("%c", &estado);
    
    while (estado < 'A' || estado > 'H'){
        printf("Estado invalido, escolha de A a H!");
        scanf("%c", &estado);
    }
        
    printf("Digite codigo da carta: ");
    scanf("%s", codigoCarta);

    printf("Digite nome da cidade: ");
    getchar();
    fgets(nomeCidade, 50, stdin);

    printf("Digite quantidade populacional: ");
    scanf("%d", &populacao);

    printf("Digite Área da Cidade: ");
    scanf("%f", &area_cidade);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontos_turistico);

    //Exibe dados cadasstrados (1° carta)
    printf("\n\n1° Carta: %s\n", codigoCarta);
    printf("1° Estado  %c\n", estado);
    printf("1° Cidade: %s", nomeCidade);
    printf("1° Codigo: %s\n", codigoCarta);
    printf("1° População: %i\n", populacao);
    printf("1° Área: %.2f\n", area_cidade);
    printf("1° PIB: %.2f\n", PIB);
    printf("1° Pontos Turisticos: %d\n\n", pontos_turistico);

    //Cadastro 2° carta
    printf("Digite os dados da 2° Carta\n");
    printf("Estado (A a H) : ");
    getchar();
    scanf("%c", &estado2);
    
    while (estado2 < 'A' || estado2 > 'H'){
        printf("Estado invalido, escolha de A a H!");
        scanf("%c", &estado2);
    }
    
    printf("Digite codigo da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite nome da cidade: ");
    getchar();
    fgets(nomeCidade2, 50, stdin);

    printf("Digite quantidade populacional: ");
    scanf("%d", &populacao2);

    printf("Digite Área da Cidade: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontos_turistico2);

    //Exibe dados cadasstrados (2° carta)
    printf("\n\n2° Carta: %s\n", codigoCarta2);
    printf("2° Estado  %c\n", estado2);
    printf("2° Cidade: %s", nomeCidade2);
    printf("2° Codigo: %s\n", codigoCarta2);
    printf("2° População: %i\n", populacao2);
    printf("2° Área: %.2f\n", area_cidade2);
    printf("2° PIB: %.2f\n", PIB);
    printf("2° Pontos Turisticos: %d", pontos_turistico2);

    return 0;
}