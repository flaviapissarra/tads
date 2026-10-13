// RETANGULO COM NUMEROS REAIS, AREA E VALORES PRECISOS

// incluir bib padrao de entrada e saida
#include <stdio.h>
int main() {
    // declarar var para as dimensoes da figura
    double base, altura, figura;
    
    // pegar info sobre a base e sobre a altura
    printf("Informe o valor da base: ");
    scanf("%lf",&base); printf("\n");

    printf("Informe o valor da altura: ");
    scanf("%lf",&altura); printf("\n");
    
    // percebi que usar double ao inves de float garante maior precisao durante os calculos e evita erro no arredondamento
    // como o exercicio nao pede, nao criei uma validacao de dados

    // calcular a area da figura
    figura = base * altura;

    // mostrar o calculo pro\a usuario\a
    // printf("A area da figura eh (%.1f * %.1f) igual a %.1f. E se trata de um \n",base,altura,figura);

    // ver se eh um retangulo ou quadrado
    if (base == altura) {
        // se a base tem o mesmo tamanho que a altura eh um quadrado
        printf("%.1f Quadrado",figura); printf("\n");
    }
    if (base!=altura) {
        // se a base e a altura forem diferentes eh um retangulo
        printf("%.1f Retângulo",figura); printf("\n");
        // alguns calculos, ainda que os valores da base e altura aparecam iguais com o %.1f, serao de um retangulo
        // isso porque o arredondamento faz com que os valores se parecam, ainda que nao sejam iguais
        // exemplo: base = 20.0000009 e altura = 20; disso, figura = 400.000018
        // ou seja, base e altura sao diferentes e o resultado sera um retangulo, ainda que na mensagem os valores arredondados aparecam iguais
    }
    
    // retornar execucao com sucesso e sem erros
    return 0;
}
