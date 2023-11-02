//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>
void Ex1_P2 (){
    char caracter;

    printf("Digite um caractere: ");
    scanf(" %c", &caracter); // Use " %c" para ignorar espaços em branco e quebras de linha.

    // Calcula o antecessor e o sucessor do caractere.
    char antecessor = caracter - 1;
    char sucessor = caracter + 1;

    printf("O antecessor de '%c' é '%c'\n", caracter, antecessor);
    printf("O sucessor de '%c' é '%c'\n", caracter, sucessor);

}