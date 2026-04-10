// exercicio 1 fundamento C
#include <stdio.h>
int main()
{
    printf("Hello World!");
    return 0;

}

//exercicio 2 fundamento C
#include <stdio.h>
int main()
{
    int idade;
    float preco;
    double pi;
    char turno;
    int choveu_hoje;
    
    idade = 20;
    preco = 6.99;
    turno = 'n';
    choveu_hoje = 0;
    return 0;
}
//exercicio 3 fundamento C
#include <stdio.h>
int main()
{
    int idade;
    float preco;
    char turno;
    printf("Digite idade:\n");
    scanf("%i", &idade);
    printf("Digite o preco:\n");
    scanf("%f", &preco);
    printf("Digite o turno:\n");
    scanf(" %c", &turno);
    return 0;
}
//exercicio 4 fundamento C
#include <stdio.h>
int main()
{
    int a, b, resultado;
    printf("Digite um numero:\n");
    scanf("%i", &a);
    printf("Digite outro numero:\n");
    scanf("%i", &b);
    resultado = a + b;
    printf("Soma eh %i", resultado);
    return 0;
}
//exercicio 5 fundamento C
#include <stdio.h>
int main()
{
    int a, b, resultado;
    printf("Digite um numero:\n");
    scanf("%i", &a);
    printf("Digite outro numero:\n");
    scanf("%i", &b);
    resultado = a + b;
    printf("%i somado a %i resulta em %i \n",a,b,resultado);
    return 0;
}
//exercicio 6 fundamento C
#include <stdio.h>
int main()
{ 
    float area, raio;
    const float PI = 3.14; 
    printf("Digite o raio do circulo:\n");
    scanf("%f", &raio);
    area = raio * raio * PI;

    printf("A area do circulo eh %f \n", area);
    return 0;
}
