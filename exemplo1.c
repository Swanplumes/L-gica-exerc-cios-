#include <stdio.h>
int main (void){
int num1,num2;

printf("escreva o primeiro numero");
scanf("%i",&num1);

printf("escreva o segundo numero");
scanf("%i",&num2);
if (num1 != num2){
printf("sao diferentes");
}else{
printf("sao iguais");
}
return 0;

}
