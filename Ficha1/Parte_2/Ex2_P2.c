//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>
void Ex2_P2 (){
    double num1, num2, num3;
    double mediaAr, mediaPon;


    printf("1-Digite um numero: ");
    scanf(" %lf", &num1);

    printf("2-Digite um numero: ");
    scanf(" %lf", &num2);

    printf("3-Digite um numero: ");
    scanf(" %lf", &num3);

    printf("A média aritemética é: '%lf'\n", (num1 + num2 + num3) / 3.0);
    printf("A Média ponderada é para o primeiro numero: %lf'\n", (0.2 * num1));
    printf("A Média ponderada é para o segundo numero: %lf'\n", (0.3 * num2));
    printf("A Média ponderada é para o terceiro numero: %lf'\n", (0.5 * num3));

}