//
// Created by Leonel Carvalho on 19/10/2023.
//
//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>

void Ex4_Retangulo (){
    float comprimento, largura;

    printf("Digite o comprimento do retângulo: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    float area = comprimento * largura;
    float perimetro = 2 * (comprimento + largura);

    printf("A área do retângulo é: %.2f\n", area);
    printf("O perímetro do retângulo é: %.2f\n", perimetro);


}