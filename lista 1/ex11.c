#include <stdio.h>

int main() {

    char conceito;

    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);

    //aceitando apenas letras mai�sculas
    if (conceito == 'A' || conceito == 'B' || conceito == 'C')  {
        printf("O aluno foi aprovado!");
    } else if (conceito == 'D' || conceito == 'E') {
        printf("O aluno foi reprovado!");
    } else {
        printf("Conceito inv�lido!");
    }

    return 0;
}
