//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>

void Ex5_P2() {
    int minutos, segundos;
    int duracao_total_minutos = 0, duracao_total_segundos = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a duração da canção %d (minutos segundos): ", i);
        scanf("%d %d", &minutos, &segundos);

        // Adicione a duração da canção atual à duração total
        duracao_total_minutos += minutos;
        duracao_total_segundos += segundos;
    }

    // Verifica se há excesso de segundos para converter em minutos
    while (duracao_total_segundos >= 60) {
        duracao_total_segundos -= 60;
        duracao_total_minutos++;
    }

    printf("Duração total do álbum: %02d:%02d:%02d\n", duracao_total_minutos / 60, duracao_total_minutos % 60, duracao_total_segundos);

}