#include <stdio.h>
int main (void){
float valor_comanda,percent_taxa;
float taxa_servi�o,valor_total;

printf("informe o valor comanda");
scanf("%f",valor_comanda);

printf("informe o percentual da taxa");
scanf("%f",percent_taxa);


  // Calcula o valor da taxa de servi�o
    valor_servico = valor_comanda * (percentual_servico / 100);

    // Calcula o valor total (comanda + taxa de servi�o)
    valor_total = valor_comanda + valor_servico;

    // Exibe o resultado
    printf("\nValor do servi�o: R$ %.2f\n", valor_servico);
    printf("Valor total da conta (incluindo o servi�o): R$ %.2f\n", valor_total);

    return 0;
}
}
