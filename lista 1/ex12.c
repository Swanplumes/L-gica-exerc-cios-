#include <stdio.h>

int main() {

    float nota, frequencia;

    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    printf("Informe a frequ�ncia do aluno: ");
    scanf("%f", &frequencia);

    if (nota >= 6 && frequencia >= 75) {
        printf("O aluno foi aprovado!");
    } else {
        if (nota >= 6) {
            printf("Reprovado por frequ�ncia!");
        } else {
            if (frequencia >= 75) {
                printf("Reprovado por nota!");
            } else {
                printf("Reprovado por nota e frequ�ncia!");
            }
        }
    }
    return 0;
}
