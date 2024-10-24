#include <stdio.h>
#include <math.h>
int main (void){
float hipotenusa,med_cateto1,med_cateto2;

printf("quais as medidas?");
scanf("%f",&med_cateto1);

printf("quais as medidas?");
scanf("%f",&med_cateto2);



// Calcular a hipotenusa usando o teorema de Pitágoras
    hipotenusa = sqrt((med_cateto1 * med_cateto1) + (med_cateto2 * med_cateto2));



printf("a hipotenusa mede %.2f",hipotenusa);

return 0;
}
