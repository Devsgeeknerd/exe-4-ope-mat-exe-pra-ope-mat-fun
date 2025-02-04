// Biblioteca padrão para entrada e Saida (ex: printf, scanf).
#include <stdio.h>

// Função principal do programa.
void main()
{
    // Declara uma variável para armazenar o valor da base do retângulo.
    float base;

    // Declara uma variável para armazenar o valor da área do retângulo.
    float area;

    // Declara uma variável para armazenar o valor da altura do retângulo.
    float altura;

    // Exibe uma mensagem para o usuário digitar o valor da base.
    printf("Digite o valor da base de um retângulo: ");

    // Lê o valor da altura de um retângulo.
    // "%f" para ler um número.
    scanf("%f", &altura);

    // Calcula a área do retângulo multiplicando a base pela altura e armazena o resultado em 'area'.
    area = base * altura;

    // Exibe a área do retângulo formatada com duas casas decimais.
    // "0.2f" significa que o número será exibido com no máximo duas casas decimais após o ponto.
    printf("A área de um retângulo é: %0.2f", area);
}
