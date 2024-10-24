#include <stdio.h>

int main(void) {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d � um ano bissexto.\n", ano);
    } else {
        printf("%d n�o � um ano bissexto.\n", ano);
    }

    return 0;
}
