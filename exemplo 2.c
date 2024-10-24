#include <stdio.h>

int main(void) {
    float nota;
    int presenca, total_aulas;

    // Entrada de dados
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("Digite o numero de aulas que o aluno assistiu: ");
    scanf("%d", &presenca);

    printf("Digite o numero total de aulas: ");
    scanf("%d", &total_aulas);

    // Verificação das condições de aprovação diretamente na condição
    if (nota >= 6.0 && (presenca * 100 / total_aulas) >= 75) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
        if (nota < 6.0) {
            printf("Motivo: nota insuficiente.\n");
        }
        if ((presenca * 100 / total_aulas) < 75) {
            printf("Motivo: presenca insuficiente.\n");
        }
    }

    return 0;
}
