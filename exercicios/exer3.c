// exercicio 1.1 operadores de logica 

#include <stdio.h>
#include <ctype.h>
int main()
{
    int idade;
    char documento;

    printf("------Idade:-------\n");
    scanf("%i", &idade);
    printf("-------------------\n");
    printf("Voce trouxe um documento oficial com foto?\n");
    printf("Digite s para sim ou n para n.\n");
    scanf(" %c", &documento);
    char documento_formatado = tolower(documento);
    if(documento_formatado == 's' || documento_formatado == 'n'){
        if(idade >= 18 && documento_formatado == 's'){
            printf("Bem Vindo!\n");
        }else{
            printf("Sinto muito!\n");
        }
    }else{
        printf("Opcao invalida!\n");
    }
    return 0;
}
//  exercicio 1 operadores de logica
#include <stdio.h>
int main()
{
    int idade;
    char documento;

    printf("------Idade:-------\n");
    scanf("%i", &idade);
    printf("-------------------\n");
    printf("Voce trouxe um documento oficial com foto?\n");
    printf("Digite s para sim ou n para n.\n");
    scanf(" %c", &documento);

    if(documento == 's' || documento == 'n' || documento == 'S' || documento == 'N'){
        if(idade >= 18 && (documento == 's' || documento == 'S')){
            printf("Bem Vindo!\n");
        }else{
            printf("Sinto muito!\n");
        }
    }else{
        printf("Opcao invalida!\n");
    }
    return 0;
}
// exercicio 2 operadores de logica
#include <stdio.h>
int main()
{
    int idade;
    char responsavel;
    printf("------Idade:-------\n");
    scanf("%i", &idade);
    printf("-------------------\n");
    printf("Acompanhado de responsavel?\n");
    printf("Digite s para sim ou n para n.\n");
    scanf(" %c", &responsavel);

    if(idade > 12 || responsavel == 's'){
        printf("Pode ir ao passeio!\n");
    }else{
        printf("Sem passeio!\n");
    }
    return 0;
}
// exercicio 3 operadores de logica
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero:\n");
    scanf("%i", &n);

    if(n <= 10 && n <=20){
        printf("Dentro do intervalo!\n");
    }else{
        printf("Fora do intervalo!\n");
    }
    return 0;
}
// exercicio 4 operadores de logica
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero:\n");
    scanf("%i", &n);

    if(((n % 5) == 0) && ((n % 3) == 0)){
        printf("Divisivel por ambos!\n");
    }else{
        printf("Nao divisivel!\n");
    }
    return 0;
}
//  exercicio 5 operadores de logica
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Digite três número:\n");
    scanf("%i %i %i", &a, &b, &c);

    if (a > b && a > c)
        printf("%i é o maior!\n", a);
    else if( b > a && b >c)
        printf("%i é o maior!\n", b);
    else   
        printf("%i é o maior!\n", c);
    return 0;
}
// exercicio 6.1 operadores de logica
#include <stdio.h>
int main()
{
    float x, y, z;
    printf("Digite três número:\n");
    scanf("%i %i %i", &x, &y, &z);

    if(x == y)
        if(y == z)
            printf("Equilátero!\n");
        else 
            if(x != y)
                if(y != z)
                    printf("Escaleno!\n");
                else
                    printf("Isósceles!\n");
    return 0;
}
// exercicio 6 operadores de logica
#include <stdio.h>
int main()
{
    float x, y, z;
    printf("Digite três número:\n");
    scanf("%i %i %i", &x, &y, &z);

    if((x == y) && (y == z))
        printf("Equilátero!\n");
    else if((x != y) && (y != z))
        printf("Escaleno!\n");
    else
        printf("Isósceles!\n");
    
    return 0;
}

// exercicio 7 operadores de logica
#include <stdio.h>
int main()
{
    int ano;
    printf("Digite ano:\n");
    scanf("%i", &ano);
    if (ano > 0 && ano < 9999)
    {
        if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
            printf("Bissexto");
        else
            printf("Não é bissexto!\n");
    }else{
        printf("Ano inválido!\n");
    }
    return 0;
}
