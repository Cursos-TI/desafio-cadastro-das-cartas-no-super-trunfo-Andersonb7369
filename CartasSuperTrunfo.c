#include <stdio.h>

#define ESTADOS 2
#define CIDADES 2

typedef struct {
    char codigo[4];  
    long populacao;  
    float area;      
    float pib;       
    int pontos_turisticos; 
} Carta;


void cadastrarCarta(Carta *carta, char estado, int cidade) {
   
    sprintf(carta->codigo, "%c%02d", estado, cidade);
    
    printf("Cadastrar dados da cidade %s:\n", carta->codigo);
    printf("População: ");
    scanf("%ld", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (milhões): ");
    scanf("%f", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}


void exibirCarta(Carta carta) {
    printf("\nDados da cidade %s:\n", carta.codigo);
    printf("População: %ld\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    Carta cartas[ESTADOS][CIDADES]; 

    
    for (char estado = 'A'; estado < 'A' + ESTADOS; estado++) {
        for (int cidade = 1; cidade <= CIDADES; cidade++) {
            cadastrarCarta(&cartas[estado - 'A'][cidade - 1], estado, cidade);
        }
    }

    
    printf("\nCartas cadastradas:\n");
    for (char estado = 'A'; estado < 'A' + ESTADOS; estado++) {
        for (int cidade = 1; cidade <= CIDADES; cidade++) {
            exibirCarta(cartas[estado - 'A'][cidade - 1]);
        }
    }
    
    return 0;
}