#include <stdio.h>

int main(void) {
    int numero1, numero2, temp;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);
    temp = numero1;
    numero1 = numero2;
    numero2 = temp;

    printf("Valor da vari�vel numero1: %d\n", numero1);
    printf("Valor da vari�vel numero2: %d\n", numero2);

    return 0;
}
