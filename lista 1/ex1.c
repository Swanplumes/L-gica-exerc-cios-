#include <stdio.h>
int main (void){
float diametro, comprimento, area,raio;
float pi = 3.14;

printf ("digite o raio da circunferencia");
scanf("%f",&raio);

diametro = 2 * raio;
comprimento = 2 * pi*raio;
area = pi * raio * raio;

 printf("Diâmetro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Área: %.2f\n", area);

    return 0;
}



