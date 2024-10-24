#include <stdio.h>
int main (void) {

    int bombom, alunos, adicional;

    printf("Quantos bombons Genovena tem?\n");
    scanf("%i", &bombom);  // Corrigido o scanf para usar &

    printf("Informe o número de alunos: ");
    scanf("%i", &alunos);

    if (bombom % alunos == 0) {
        printf("Não faltam bombons\n");
    } else {
        adicional = alunos - (bombom % alunos);

        if (adicional == 1) {
            printf("Falta 1 bombom!\n");  // Singular
        } else {
            printf("Faltam %i bombons!\n", adicional);  // Plural
        }
    }

    return 0;
}
