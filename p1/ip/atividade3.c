// ESTACIONAMENTO
#include <stdio.h>

// prof, eu aprendi a programar primeiro em python e, nos exercicios, me ensinaram a sempre fazer validacao de dados para evitar que o programa travasse
// sei que nao e uma boa pratica de programacao fazer muitos ifs, elifs e elses, mas imaginei que, no caso desse programa em especifico, usar essa estrutura seria realmente a melhor maneira de solucionar o problema

int main() {
    // aqui declaro as variaveis necessarias
    int total_vagas, carros_entraram, carros_sairam, vagas_restantes;
    
    printf("Partimos da premissa que nao ha nenhum carro dentro do estacionamento.\n");
    
    // para pegar o valor total de vagas
    printf("Quantidade total de vagas: "); scanf("%d", &total_vagas);

    // para saber quantos carros entraram
    printf("Quantidade de carros que entraram: "); scanf("%d", &carros_entraram);

    // para saber a qtd de carros que sairam
    printf("Quantidade de carros que sairam: "); scanf("%d", &carros_sairam);

    // validando os dados para fazer sentido no mundo real
    if (carros_sairam > carros_entraram) {
        printf("\nNao podem sair mais carros (%d) do que os que entraram (%d)!\n", carros_sairam, carros_entraram);
    } else if (carros_entraram > total_vagas) {
        printf("\nErro: O numero de carros que entraram (%d) e maior que a capacidade (%d)!\n", carros_entraram, total_vagas);
    } else {
        // caso os dados sejam validos, finalmente faz-se o calculo e exibimos a mensagem
        vagas_restantes = total_vagas - carros_entraram + carros_sairam;
        printf("\nExistem %d vagas no estacionamento.\n", vagas_restantes);
    }
    
    return 0;
}
