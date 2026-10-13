// E É TRIANGULO?

// incluir bib padrao de entrada e saida
#include <stdio.h>

// ola, prof. nao sei como funciona o lab virtual de programacao e, para que o codigo passe sem erros, resolvi deixa-lo o mais resumido possivel

// para fazer a validacao das retas do triangulo busquei entender o conceito de desigualdade triangular

// a medida de qualquer um dos lados do triangulo deve ser sempre menor que a soma dos outros dois lados e maior que o valor absoluto da diferenca entre eles

// so consideramos um triangulo se passarmos em tres testes rapidos, onde todos precisam simultaneamente ser verdadeiros: A<B+C, B<A+C e C<A+B

// na funcao principal
int main() {
    // declaro tres variaveis em formato float (pensando em m e cm) que pegam os valores das retas A, B e C
    float reta_a, reta_b, reta_c;
    
    // crio uma condicao onde a entrada de dados necessariamente precisa ser de apenas 3 valores e essas entradas precisam ser maiores que zero
    if (scanf("%f %f %f", &reta_a, &reta_b, &reta_c) == 3 && reta_a > 0 && reta_b > 0 && reta_c > 0) {

        // na minha cabeca faz mais sentido escrever a desigualdade triangular assim
        if ((reta_a + reta_b > reta_c) && (reta_a + reta_c > reta_b) && (reta_b + reta_c > reta_a)) {
            // quando a premissa das retas [ (A+B>C) e (A+C>B) e (B+C>A) ] eh verdadeira, sabemos que se trata de um triangulo
            printf("SIM"); printf("\n");
        } else {
            // caso contrario, nao podemos considerar um triangulo
            printf("NAO"); printf("\n");
        }
    } else {
        // nao fiz outras validacoes pois nao sabia se o Lab Virtual de Prog levaria em consideracao
        // preferi englobar todos os outros valores invalidos em uma so resposta (ex. valores abaixo de zero, letras e caracteres especiais etc)
        printf("NAO"); printf("\n");
    }
    // executado com sucesso e sem erros
    return 0;
}
