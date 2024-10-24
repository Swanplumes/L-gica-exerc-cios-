#include <stdio.h>

int main(void) {
    float temp1, temp2, temp3, maior, menor, amplitude;

    printf("Digite a primeira temperatura: ");
    scanf("%f", &temp1);

    printf("Digite a segunda temperatura: ");
    scanf("%f", &temp2);

    printf("Digite a terceira temperatura: ");
    scanf("%f", &temp3);
    maior = temp1;
    menor = temp1;

    if (temp2 > maior) {
        maior = temp2;
    }
    if (temp2 < menor) {
        menor = temp2;
    }
    if (temp3 > maior) {
        maior = temp3;
    }
    if (temp3 < menor) {
        menor = temp3;
    }

    amplitude = maior - menor;

    printf("Amplitude térmica: %.2f\n", amplitude);

    return 0;
}
