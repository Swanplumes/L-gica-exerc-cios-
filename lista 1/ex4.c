#include<stdio.h>
int main (void){
float c,f;

printf("temperatura em celsius:\n");
scanf("%f",&c);

f= (9.0/5.0) * c +32;
printf("conversao de celsius para farhenheit : %.2f\n", f);


return 0;
}
