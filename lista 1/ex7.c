#include <stdio.h>

int main(void) {
    int idade1, idade2, maior, menor, dif;

    // Solicita a idade da primeira pessoa
    printf("Escreva a idade da primeira pessoa: \n");
    scanf("%i", &idade1);  // Corrigido: adicionado &

    // Solicita a idade da segunda pessoa
    printf("Escreva a idade da segunda pessoa: \n");
    scanf("%i", &idade2);  // Corrigido: adicionado &

    // Verifica qual � a maior idade
    if (idade1 > idade2) {
        maior = idade1;
        menor = idade2;  // Define menor
    } else {
        maior = idade2;
        menor = idade1;  // Define menor
    }

    // Calcula a diferen�a de idade
    dif = maior - menor;

    // Exibe a diferen�a de idade
    printf("A diferen�a positiva da idade 1 e idade 2 �: %i\n", dif);

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
