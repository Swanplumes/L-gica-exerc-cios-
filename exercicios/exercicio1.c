#include <stdio.h>

int main(void) {
    float raio, area, comprimento;
    const float pi = 3.14;

    printf("Informe o raio da circunferência: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    comprimento = 2 * pi * raio;

    printf("Área: %.2f\n", area);
    printf("Comprimento: %.2f\n", comprimento);

    return 0;
}
