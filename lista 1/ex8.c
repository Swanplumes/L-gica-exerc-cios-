#include <stdio.h>
int main (void){
int ano_nascimento,ano_atual,idade;
printf("digite o ano de nascimento : \n ");
scanf("%i",&ano_nascimento);

printf("digite o ano atual : \n ");
scanf("%i",&ano_atual);

if (ano_nascimento == ano_atual){
printf("recem nascido");


}else if (ano_nascimento >ano_atual){
printf("ano de nascimento invalido");
}
idade= ano_atual - ano_nascimento;
printf("a idade é : %i \n",idade);



return 0;
}
