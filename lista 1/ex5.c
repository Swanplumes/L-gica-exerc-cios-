#include <stdio.h>

int main(void) {
    char resp;
    float c, f;

    // Solicita ao usuário a opção de conversão
    printf("Digite 'c' para converter Celsius para Fahrenheit ou 'f' para Fahrenheit para Celsius:\n");
    scanf(" %c", &resp);  // Corrigido: usar %c e adicionar espaço antes de %c

    // Verifica a opção escolhida
    if (resp == 'c') {
        printf("Digite a temperatura em Celsius:\n");
        scanf("%f", &c);  // Lê a temperatura em Celsius
        f = (9.0 / 5.0) * c + 32;  // Conversão de Celsius para Fahrenheit
        printf("Conversão de Celsius para Fahrenheit: %.2f\n", f);
    } else if (resp == 'f') {
        printf("Digite a temperatura em Fahrenheit:\n");
        scanf("%f", &f);  // Lê a temperatura em Fahrenheit
        c = (f - 32) * (5.0 / 9.0);  // Conversão de Fahrenheit para Celsius
        printf("Conversão de Fahrenheit para Celsius: %.2f\n", c);
    } else {
        printf("Opção inválida! Por favor, digite 'c' ou 'f'.\n");  // Para qualquer outra entrada
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
