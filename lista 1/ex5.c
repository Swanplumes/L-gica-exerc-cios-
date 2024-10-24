#include <stdio.h>

int main(void) {
    char resp;
    float c, f;

    // Solicita ao usu�rio a op��o de convers�o
    printf("Digite 'c' para converter Celsius para Fahrenheit ou 'f' para Fahrenheit para Celsius:\n");
    scanf(" %c", &resp);  // Corrigido: usar %c e adicionar espa�o antes de %c

    // Verifica a op��o escolhida
    if (resp == 'c') {
        printf("Digite a temperatura em Celsius:\n");
        scanf("%f", &c);  // L� a temperatura em Celsius
        f = (9.0 / 5.0) * c + 32;  // Convers�o de Celsius para Fahrenheit
        printf("Convers�o de Celsius para Fahrenheit: %.2f\n", f);
    } else if (resp == 'f') {
        printf("Digite a temperatura em Fahrenheit:\n");
        scanf("%f", &f);  // L� a temperatura em Fahrenheit
        c = (f - 32) * (5.0 / 9.0);  // Convers�o de Fahrenheit para Celsius
        printf("Convers�o de Fahrenheit para Celsius: %.2f\n", c);
    } else {
        printf("Op��o inv�lida! Por favor, digite 'c' ou 'f'.\n");  // Para qualquer outra entrada
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
