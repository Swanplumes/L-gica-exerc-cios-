#include <stdio.h>
int main (void){
int num1,num2,maior;

printf ("leia o primeiro numero");
scanf("%i",&num1);


printf ("leia o segundo numero");
scanf("%i",&num2);

if (num1 >= num2){

    maior= num1;

}else{
maior = num2;
}
printf(" o maior dos numeros é : %i",maior);

return 0;
}
