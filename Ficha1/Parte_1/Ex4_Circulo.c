//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>

void Ex4_Circulo(){
    float raio;
    float pi = 3.14;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    float area = pi * raio * raio;


    printf("A área do circulo é: %.2f\n", area);



}