
#include <stdio.h>

void Ex4_P2() {
    double num1, num2, num3;

    printf("1-Digite um numero: ");
    scanf("%lf", &num1);

    printf("2-Digite um numero: ");
    scanf("%lf", &num2);

    printf("3-Digite um numero: ");
    scanf("%lf", &num3);

    double total = num1 + num2 + num3;
    double desconto = total * 0.10; // 10% de desconto

    double precoComDesconto = total - desconto;

    printf("O preço a pagar com 10%% de desconto é: %.2lf\n", precoComDesconto);
}
