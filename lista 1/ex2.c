#include <stdio.h>
int main (void){
float valor_comanda,percent_taxa;
float taxa_serviço,valor_total;

printf("informe o valor comanda");
scanf("%f",valor_comanda);

printf("informe o percentual da taxa");
scanf("%f",percent_taxa);


  // Calcula o valor da taxa de serviço
    valor_servico = valor_comanda * (percentual_servico / 100);

    // Calcula o valor total (comanda + taxa de serviço)
    valor_total = valor_comanda + valor_servico;

    // Exibe o resultado
    printf("\nValor do serviço: R$ %.2f\n", valor_servico);
    printf("Valor total da conta (incluindo o serviço): R$ %.2f\n", valor_total);

    return 0;
}
}
