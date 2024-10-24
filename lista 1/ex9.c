#include <stdio.h>
int main (){
float altura;
float peso_ideal;
char resp;

printf("digite a altura");
scanf("%f",&altura);

printf("Digite o sexo (m para masculino, f para feminino): ");
scanf(" %c", &resp);

if (resp == 'm'){
printf (" é macho");
peso_ideal = (72.7 * altura) - 58;
}else{

printf ("é femea");
peso_ideal = (62.1 * altura) - 47.7;
}
printf("o peso ideal é : %.2f",peso_ideal);

return 0;
}
