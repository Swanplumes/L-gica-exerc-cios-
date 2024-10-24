#include <stdio.h>
int main (void){
int num1,num2,maior,menor,divisivel;

printf("digite o primeiro numero");
scanf("%i",&num1);

printf("digite o segundo numero");
scanf("%i",&num2);

if (num1 >num2){
maior= num1;
menor= num2;
}else{
maior= num2;
menor=num1;
} if ( maior % menor == 0 ){
printf("% i é divisivel por %i",maior,menor);
}else{
printf ("%i nao é divisivel por %i",maior,menor);
}











return 0;
}
