// exercicio 1 fundamento C
#include <stdio.h>
int main()
{
    printf("Aula de programacao!\n");
    return 0;
}
// exercicio 2 fundamento C
#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    return 0;
}
// exercicio 3 fundamento C
#include <stdio.h>
int main()
{
    int ano_atual;
    printf("Em qual ano estamos?\n");
    scanf("%d", &ano_atual);
    printf("Otimo, %d!\n", ano_atual);
    return 0;
}
// exercicio 4 fundamento C
#include <stdio.h>
int main()
{
    int idade;
    float peso;
    char genero;

    printf("Qual a idade do seu pet?\n");
    scanf("%d", &idade);
    printf("Qual  a peso do seu pet?\n");
    scanf("%f", &peso);
    printf("Seu pet e macho ou femea?\n");
    scanf(" %c", &genero);

    printf("Idade: %i", idade);
    printf("Peso: %.3f", peso);
    printf("Genero: %c", genero);
    return 0;
}
// exercicio 5 fundamento C
#include <stdio.h>

int main()
{
    float a, b, resultado;
    printf("Digite dois numeros:\n");
    scanf("%f%f", &a, &b);
    resultado = a + b;
    printf("Resultado e: %.2f\n", resultado);
    return 0;
}
// exercicio 6 fundamento C
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero, sucessor, antecessor;
    printf("Digite um numero:\n");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O numero informado foi %d, o antecessor e %d e o sucessor e %d.\n", numero, antecessor, sucessor);
    return 0;
}
// exercicio 7 fundamento C
#include <stdio.h>
#include <math.h>

int main()
{
    float volume, altura, raio;
  
    printf("Digite altura e raio:\n");
    scanf("%f%f", &altura, &raio);

    volume = altura * pow(raio,2) * M_PI;
    printf("Volume da Lata: %.3f\n", volume);
    return 0;
}
// exercicio 8 fundamento C
#include <stdio.h>
#include <math.h>

int main()
{
    float total_dolar, total_real, cambio;
  
    printf("Quantos dolares você quer comprar?\n");
    scanf("%f", total_dolar);
    printf("Qual o valor do dolar hoje?\n");
    scanf("%f", cambio);
    total_real = total_dolar * cambio;
 
    printf("Sao necessarios %f reais para comprar %d dolares!\n", total_real, total_dolar);
    return 0;
}
// exercicio 9 fundamento C
#include <stdio.h>
int main()
{
    const float REPRESENTANTE = 0.2; 
    const float IMPOSTOS = 0.3;
    float valor_compra, valor_venda;

    printf("Qual valor de compra?\n");
    scanf("%f", &valor_compra);
    valor_venda = valor_compra + (valor_compra * 0.2) + (valor_compra * 0.3);
    printf("Valor Venda: %.2f\n", valor_venda);
    return 0;
}
// exercicio 10 fundamento C
#include <stdio.h>
int main()
{
    float valor_inicial, anos, valor_final;
    const float TAXA_JUROS = 0.05;
    printf("Quantos voce deseja investir?\n");
    scanf("%f", &valor_inicial);
    printf("Por quantos anos?\n");
    scanf("%f", &anos);
    valor_final = valor_inicial + (valor_inicial + TAXA_JUROS * anos);
    printf("Valor Final: %f\n", valor_final);
    return 0;
}
//  exercicio 11 fundamento C
#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Quantos graus Fahrenheit?\n");
    scanf("%f", &fahrenheit);

    celsius = (5 * (fahrenheit - 32)) / 9;
    printf("%.1f graus Celsius!\n ");
    return 0;
}
// exercicio 12 fundamento C (solução alternativa)
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Digite dois números:\n");
    scanf("%d%d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %.2f\n", (float) a / b); // casting (quando é preciso converter um tipo para outro.)
    printf("Potencia: %.0f\n", pow(a, b));
    printf("Resto: %d\n", a % b);
    return 0;
}
// exercicio 12 fundamento C
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, resultado;
    float resultado_divisao;

    printf("Digite dois números:\n");
    scanf("%d%d", &a, &b);

    resultado = a + b;
    printf("Soma: %d\n", resultado);
    resultado = a - b;
    printf("Subtracao: %d\n", resultado);
    resultado = a * b;
    printf("Multiplicacao: %d\n", resultado);
    resultado_divisao = a / b;
    printf("Divisao: %.2f\n", resultado_divisao);
    resultado = pow(a,b);
    printf("Potencia: %d\n", resultado);
    resultado = a % b;
    printf("Resto: %d\n", resultado);
    return 0;
}
//  exercicio 13 fundamento C
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, auxiliar;
    printf("Digite dois números:\n");
    scanf("%d%d", &a, &b);
    printf("Valor A %d | Valor de B %d\n", a, b);

    auxiliar = a;
    a = b;
    b = auxiliar;
    
    printf("Valor A %d | Valor de B %d\n", a, b);
    return 0;
}
