#include <stdio.h>

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Carta 1:
int main() {
    char estado = 'A';
    char codigoCarta[4] = "01";
    char nomeCidade[50];
    int populacao;
    float area_cidade;
    float PIB;
    int pontos_turistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cartas do Super Trunfo");
    printf("Digite os dados da Carta");
    printf("Estado (A a H) :");
    scanf("%c", &estado);
    
    while (estado < 'A' || estado > 'H'){
        printf("Estado invalido, escolha de A a H!");
        scanf("%c", &estado);
    }
        
    printf("Digite codigo da carta: ");
    scanf("%s", &codigoCarta);

    printf("Digite nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Digite quantidade populacional: ");
    scanf("%d", &populacao);

    printf("Digite Área da Cidade: ");
    scanf("%f", &area_cidade);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontos_turistico);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCarta: %s\n", codigoCarta);
    printf("Estado  %c\n", estado);
    printf("Cidade: %s\n", nomeCidade);
    printf("Codigo: %s\n", codigoCarta);
    printf("População: %i\n", populacao);
    printf("Área: %.2f\n", area_cidade);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d", pontos_turistico);

    return 0;
}
    

    
    


    
  
    


