// exercicio 1 Estrutura de seleção
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%i", &numero);
    if(numero > 0){
        printf("Positivo!\n");
    }else{
        printf("Negativo!\n");
    }
    return 0;
}

// exercicio 2 Estrutura de seleção
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%i", &numero);
    if((numero % 2) != 0)
        printf("Impar!\n");
    else
        printf("Par!\n");
    return 0;
}

// exercicio 3 Estrutura de seleção
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Digite tres numeros:\n");
    scanf("%i %i %i", &a, &b, &c);
    
    if(a > b){
        if(a > c){
            printf("%i e maior!\n", a);
        }else{
            printf("%i e  maior!\n", c);
        }
    }else if (b > a){
        if(b > c){
            printf("%i e  maior!\n", b);
        }else{
            printf("%i e  maior!\n", c);
        }
    }else if (c > a){
        if(c > b){
            printf("%i e maior!\n", c);
        }else{
            printf("%i e maior!\n", b);
        }
    }else if( a == b){
        if(b == c){
            printf("Sao iguais!\n", a, b);            
        }
    }
    return 0;
}
// exercicio 4.1 Estrutura de seleção
#include <stdio.h>

int main()
{
    int idade;
    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    if(idade > 65){
        printf("Eleitor Facultativo!\n");
    }else if(idade >= 18){
        printf("Eleitor Obrigatorio!\n");
    }else if(idade >= 16){
        printf("Eleitor Facultativo!\n");
    }else{
        printf("Não Eleitor!\n");
    }
    return 0;
}

// exercicio 4.2 Estrutura de seleção
#include <stdio.h>

int main()
{
    int idade;
    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    if(idade >= 18){
        if(idade < 65){
            printf("Eleitor Obrigatorio!\n");
        }else{
            printf("Eleitor Facultativo!\n");
        }
    }else if(idade >= 16){
        if(idade < 18){
            printf("Eleitor Facultativo!\n");
        }else{
            printf("Eleitor Obrigatorio!\n");
        }
    }else{
        printf("Não Eleitor!\n");
    }
        
    return 0;
}
//  exercicio 4 Estrutura de seleção
#include <stdio.h>

int main()
{
    int idade;
    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    if(idade < 16)
        printf("Não Eleitor!\n");
    else if(idade < 18)
        printf("Eleitor Facultativo!\n");
    else if(idade > 65)
        printf("Eleitor Facultativo!\n");
    else
        printf("Eleitor Obrigatório!\n");
    return 0;
}

// exercicio 5.1 Estrutura de seleção#include <stdio.h>

int main()
{
    float media;
    printf("Qual sua media?\n");
    scanf("%f", &media);

    if(media >= 7.0){
        printf("Aprovado!\n");
    }else{
        if(media < 2.0){
            printf("Reprovado!\n");
        }else{
            printf("Exame!\n");
        }
    }

    return 0;
}
// exercicio 5.2 Estrutura de seleção
#include <stdio.h>

int main()
{
    float media;
    printf("Qual sua media?\n");
    scanf("%f", &media);

    if(media >= 7.0){
        printf("Aprovado!\n");
    }else if(media < 2.0){
        printf("Reprovado!\n");
    }else{
        printf("Exame!\n");
    }

    return 0;
}
