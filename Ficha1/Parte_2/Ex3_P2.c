//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>
void Ex3_P2 (){
    int num1, num2 ;


    printf("1-Digite um numero: ");
    scanf(" %d", &num1);

    printf("2-Digite um numero: ");
    scanf(" %d", &num2);
    // Troca o valor das variáveis sem criar variáveis adicionais
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("Valores trocados: valor1 = %d, valor2 = %d\n", num1, num2);







}