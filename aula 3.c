#include <stdio.h>

int main(void) {
    int idade;
    char plano;
    float valor_base = 180;
    float mensalidade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite 'r' para regional ou 'n' para nacional: ");
    scanf(" %c", &plano);

    mensalidade = valor_base + (6 * idade);

    if (idade < 18 || idade > 60) {
        mensalidade += 200;
    }

    if (plano == 'n') {
        mensalidade *= 1.5;
    }

    printf("A sua mensalidade é %.2f\n", mensalidade);

    return 0;
}
