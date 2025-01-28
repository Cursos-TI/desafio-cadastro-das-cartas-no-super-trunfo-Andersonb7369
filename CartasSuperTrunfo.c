#include <stdio.h>
#include <string.h>

// Função auxiliar para formatar números com pontos de milhar
void formatarNumero(int numero, char *saida) {
    char buffer[20];
    sprintf(buffer, "%d", numero);
    int len = strlen(buffer);
    int pos = 0;
    for (int i = 0; i < len; i++) {
        saida[pos++] = buffer[i];
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            saida[pos++] = '.';
        }
    }
    saida[pos] = '\0';
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Defina o número de cidades a serem cadastradas
    int numCidades = 3; // Por exemplo, 3 cidades
    for (int i = 0; i < numCidades; i++) {
        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char codigoCidade[4] = "";
        char nome[50] = "";
        int populacao = 0;
        int area = 0;
        int pib = 0;
        int numeroPontosTuristicos = 0;
            
        // Cadastro das Cartas:
        // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Digite o codigo da cidade:\n");
        scanf("%s", codigoCidade);

        printf("Digite o nome da cidade:\n");
        getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0; // Remover o caractere de nova linha

        printf("Digite a populacao:\n");
        scanf("%d", &populacao);

        printf("Digite a Area da cidade:\n");
        scanf("%d", &area);

        printf("Digite o PIB da cidade:\n");
        scanf("%d", &pib);

        printf("Digite o numero de pontos turisticos:\n");
        scanf("%d", &numeroPontosTuristicos);
        
        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("\n\n################ SUPER TRUNFO ################\n");
        printf("################    CARTA %d   ################\n\n", i + 1); // i + 1 para exibir o numero da carta atual

        printf("Codigo da Cidade: %s\n", codigoCidade);
        printf("Nome: %s\n", nome);

        char populacaoFormatada[20];
        formatarNumero(populacao, populacaoFormatada);
        printf("Populacao Total: %s\n", populacaoFormatada);

        char areaTotal[20];
        formatarNumero(area, areaTotal);
        printf("Area total: %s Km2\n", areaTotal);

        printf("PIB: %d Bilhoes\n", pib);
        printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);

        printf("\n################    FIM CARTA %d   ################\n\n", i + 1); // i + 1 para exibir o numero da carta atual

    }

    // Pausar o programa antes de sair
    printf("Pressione Enter para sair...");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    getchar(); // Espera o usuário pressionar Enter

    return 0;
}