#include <stdio.h>

int main() {

    char conceito;

    printf("Informe o conceito do aluno: ");
    scanf("%c", &conceito);

    switch(conceito) {
        case 'A':
            printf("Voc� foi aprovado com nota superior a 9.");
            break;
        case 'B':
            printf("Voc� foi aprovado com nota entre 7,5 e 9.");
            break;
        case 'C':
            printf("Voc� foi aprovado com nota entre 6 e 7,5.");
            break;
        case 'D':
            printf("Voc� est� reprovado mas pode fazer uma reavalia��o.");
            break;
        case 'E':
            printf("Voc� foi reprovado com nota inferior a 4.");
            break;
        default:
            printf("Conceito inv�lido!");
    }
    return 0;
}
