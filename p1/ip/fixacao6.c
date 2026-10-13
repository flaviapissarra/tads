// QUADRADO OU RETANGULO?

// incluir bib padrao de entrada e saida
#include <stdio.h>

// chamar a funcao principal
int main(){
    // declarar as variaveis necessarias para o calculo, necessariamente inteiras
    int base, altura, area;

    // pegar os valores 'base' e 'altura'
    // printf("Digite os valores da base e da altura, nessa ordem, utilizando apenas um espaco entre eles");
    
    // ler os valores digitados pelo\a usuario\a
    scanf("%i %i",&base,&altura);
    
    // partindo do pressuposto que as entradas serao validas, nao fiz verificacao de entrada
    
    // se base e altura sao iguais entao eh quadrado, do contrario, se base e altura sao diferentes entao eh retangulo
    if (base==altura) {
        area = base * altura;
        // printf("Eh um quadrado. \n");
        printf("%i", area);
    } else {
        area = base * altura;
        // printf("Eh um retangulo de dimensoes %i por %i com area total de ", base, altura);
        printf("%i", area);
        // printf(" (c)m^2. \n");
    };

    // retornar que foi executado com sucesso
    return 0;
};
