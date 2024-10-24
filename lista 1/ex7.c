#include <stdio.h>

int main(void) {
    int idade1, idade2, maior, menor, dif;

    // Solicita a idade da primeira pessoa
    printf("Escreva a idade da primeira pessoa: \n");
    scanf("%i", &idade1);  // Corrigido: adicionado &

    // Solicita a idade da segunda pessoa
    printf("Escreva a idade da segunda pessoa: \n");
    scanf("%i", &idade2);  // Corrigido: adicionado &

    // Verifica qual é a maior idade
    if (idade1 > idade2) {
        maior = idade1;
        menor = idade2;  // Define menor
    } else {
        maior = idade2;
        menor = idade1;  // Define menor
    }

    // Calcula a diferença de idade
    dif = maior - menor;

    // Exibe a diferença de idade
    printf("A diferença positiva da idade 1 e idade 2 é: %i\n", dif);

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
