#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigoCidade = 0;
    char nome[50] = "";
    int populacao = 0;
    int area = 0;
    float pib = 0.0;
    int numeroPontosTuristicos = 0;
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da cidade:\n");
    scanf("%d", &codigoCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%d", &nome);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a Área da cidade:\n");
    scanf("%d", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%d", &pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &numeroPontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código: %d - Cidade: %s\n", codigoCidade, nome);
    prinf("População: %d\n", populacao);
    printf("Área total: %d\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);


    return 0;
}
