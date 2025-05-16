#include <stdio.h>

int main() {
    
    // Estrutura para montagem de cartas
    
    struct Carta {
        char estado[30];
        unsigned long int pop;  // População
        int pontos;             // Pontos turísticos
        float pib;              // PIB em bilhões
        float area;             // Área em km²
        float pib_pc;           // PIB per capita
        float densidade_pop;    // Densidade populacional
        float super_poder;      // Super poder
    };

    struct Carta carta1, carta2;
    int escolha;

    // Dados da carta de Santa Catarina
    
    sprintf(carta1.estado, "Santa Catarina");
    carta1.area = 95730.0;
    carta1.pib = 446.6;
    carta1.pop = 7600000;
    carta1.pontos = 300;
    carta1.pib_pc = (carta1.pib * 1000000000) / carta1.pop;
    carta1.densidade_pop = carta1.pop / carta1.area;
    carta1.super_poder = (float)carta1.pop + carta1.area + carta1.pib +
                         carta1.pontos + carta1.pib_pc + (1.0f / carta1.densidade_pop);

    
    // Dados da carta do Paraná
    
    sprintf(carta2.estado, "Paraná");
    carta2.area = 199307.0;
    carta2.pib = 564.2;
    carta2.pop = 11824665;
    carta2.pontos = 200;
    carta2.pib_pc = (carta2.pib * 1000000000) / carta2.pop;
    carta2.densidade_pop = carta2.pop / carta2.area;
    carta2.super_poder = (float)carta2.pop + carta2.area + carta2.pib +
                         carta2.pontos + carta2.pib_pc + (1.0f / carta2.densidade_pop);

    
    // Mostrar status das cartas
    
    printf("\n=== STATUS DAS CARTAS ===\n");

    printf("\n[CARTA 1] %s\n", carta1.estado);
    printf("População: %lu\n", carta1.pop);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos);
    printf("PIB per capita: %.2f\n", carta1.pib_pc);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidade_pop);
    printf("Super poder: %.2f\n", carta1.super_poder);

    printf("\n[CARTA 2] %s\n", carta2.estado);
    printf("População: %lu\n", carta2.pop);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos);
    printf("PIB per capita: %.2f\n", carta2.pib_pc);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidade_pop);
    printf("Super poder: %.2f\n", carta2.super_poder);

    // Escolha do jogador
    
    printf("\nEscolha uma carta para duelar (1 ou 2): ");
    scanf("%d", &escolha);

    struct Carta selecionado, adversario;

    if (escolha == 1) {
        selecionado = carta1;
        adversario = carta2;
    } else if (escolha == 2) {
        selecionado = carta2;
        adversario = carta1;
    } else {
        printf("Escolha inválida!\n");
        return 1;
    }

    // Mostrar resultados do duelo
    
    printf("\n=== RESULTADO DO DUELO ===\n");

    printf("População: %s venceu!\n",
           (selecionado.pop > adversario.pop ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.pop > adversario.pop);

    printf("Área: %s venceu!\n",
           (selecionado.area > adversario.area ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.area > adversario.area);

    printf("PIB: %s venceu!\n",
           (selecionado.pib > adversario.pib ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.pib > adversario.pib);

    printf("Pontos turísticos: %s venceu!\n",
           (selecionado.pontos > adversario.pontos ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.pontos > adversario.pontos);

    printf("Densidade populacional: %s venceu!\n",
           (selecionado.densidade_pop < adversario.densidade_pop ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.densidade_pop < adversario.densidade_pop);

    printf("PIB per capita: %s venceu!\n",
           (selecionado.pib_pc > adversario.pib_pc ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.pib_pc > adversario.pib_pc);

    printf("Super Poder: %s venceu!\n",
           (selecionado.super_poder > adversario.super_poder ?
            "\033[0;32mSua carta\033[0m" :
            "\033[0;31mCarta adversária\033[0m"),
           selecionado.super_poder > adversario.super_poder);

    return 0;
}