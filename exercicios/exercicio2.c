#include <stdio.h>

int main(void) {
    int numero1, numero2, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    temp = numero1;
    numero1 = numero2;
    numero2 = temp;

    printf("Valor da variável numero1: %d\n", numero1);
    printf("Valor da variável numero2: %d\n", numero2);

    return 0;
}
