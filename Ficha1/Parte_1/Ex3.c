//
// Created by Leonel Carvalho on 19/10/2023.
//
#include <stdio.h>

void Ex3 (){
    int num1, num2;
    double totalsom, totalsub, totalmul, totaldiv;
    printf("Numero 1: ");
    scanf("%d", &num1 );
    printf("Numero 2: ");
    scanf("%d", &num2);
    totalsom = num1 + num2;
    totalsub = num1 - num2;
    totalmul = num1 * num2;
    totaldiv = num1 / num2;


    printf("Soma: %f\n",totalsom);
    printf("Subtração: %f\n",totalsub);
    printf("Multiplicação: %f\n",totalmul);
    printf("Divisão: %f\n",totaldiv);

}