#include <stdio.h>
#include <math.h>

int main() {

    float lado;
    float cateto1, cateto2, hipotenusa;

    printf("Informe o primeiro lado: ");
    scanf("%f", &lado);

    //como s� lemos um lado, este � o maior por enquanto,
    //ou seja, atual candidato � hipotenusa!
    hipotenusa = lado;

    //podemos reaproveitar a mesma vari�vel lado
    printf("Informe o segundo lado: ");
    scanf("%f", &lado);

    //se o segundo lado for maior que o atual candidato � hipotenusa
    //significa que o lado anterior n�o era a hipotenusa,
    //ou seja, era um dos catetos, no caso o cateto1,
    //e o lado rec�m lido, maior, � o novo candidato � hipotenusa
    if (lado > hipotenusa) {
        cateto1 = hipotenusa;
        hipotenusa = lado;
    } else { // se n�o for maior, � um cateto!
        cateto1 = lado;
    }

    //podemos reaproveitar a mesma vari�vel
    printf("Informe o terceiro lado: ");
    scanf("%f", &lado);

    //mesma verifica��o, por�m agora definindo o cateto2
    if (lado > hipotenusa) {
        cateto2 = hipotenusa;
        hipotenusa = lado;
    } else {
        cateto2 = lado;
    }

    //j� sabemos que � quem, s� resta verificar se as medidas batem:
    //hipotenusa^2 = cateto1^2 + cateto^2

    if (pow(hipotenusa, 2) == pow(cateto1,2) + pow(cateto2, 2)) {
        printf("� um tri�ngulo ret�ngulo");
    } else {
        printf("N�o � um tri�ngulo ret�ngulo");
    }

    return 0;
}
