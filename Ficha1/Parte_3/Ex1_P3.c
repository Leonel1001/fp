//
// Created by Leonel Carvalho on 19/10/2023.
//

#include <stdio.h>

void Ex1_P3() {

    int diasTrabalho;

    printf("Indique o número de dias que trabalhou:" );
    scanf("%lf", &diasTrabalho);

    int vencimento = 40;
    int subsidioAlmt = 5;

    double salarioBruto = diasTrabalho * vencimento;
    double totalsubAlmt = diasTrabalho * subsidioAlmt;
    double descontoIrs = salarioBruto * 0.10; // 10% de desconto
    double descontoSegSocialFun = salarioBruto * 0.11;
    double descontoSegSocialEmp = salarioBruto * 0.2375;
    double salarioFinal = salarioBruto - descontoSegSocialFun - descontoIrs;


    printf("Salario liquido fruto do vencimento: %.2lf\n", salarioBruto);
    printf("Subsídio de alimentação: %.2lf\n", totalsubAlmt);
    printf("Desconto para o fdp do estado!: %.2lf\n", descontoIrs);
    printf("Desconto para a segurança Social: %.2lf\n", descontoSegSocialFun + descontoSegSocialEmp );
    printf("Salário Liquido: %.2lf\n",salarioFinal );


}