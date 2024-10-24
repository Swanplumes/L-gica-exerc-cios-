#include <stdio.h>
int main (void){
int nota;

printf("digite a nota : \n");
scanf("%i",&nota);

if (nota >=9){
printf (" conceito A");
}else if (nota >=7.5){
printf("conceito B");
}else if (nota >= 6){
printf("conceito C");
}else if (nota <=6){
printf ("reprovado conceito d");
}else{
printf("reprovado conceito e");
}
return 0;
}
