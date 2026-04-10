//exercicio 1 IF ELSE
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    if(x < y){
        printf("Entrou aqui porque e verdadeiro!\n");
    }
    return 0;
}

//exercicio 2 IF ELSE
#include <stdio.h>
int main()
{
    int senha_conta = 1234;
    int senha_digitado;
    printf("Digite sua senha:\n");
    scanf("%i", &senha_digitado);
    if(senha_conta == senha_digitado){
        printf("Bem vindo!\n");
    }else{
        printf("Senha invalida!\n");
    }
    return 0;
}
// exercicio 3 IF ELSE
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int idade;
    printf("Qual sua idade?\n");
    scanf("%i", &idade);
    if(idade >= 18){
        printf("Pode tirar CNH!\n");
    }else{
        printf("Espere mais um pouco!\n");
    }
    return 0;
}
// exercicio 4 IF ELSE
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2;

    printf("Digite dois numeros:");
    scanf("%i%i", &n1, &n2);

    if( n1 > n2){
        printf("O primeiro e o maior!\n");
    }else{
        printf("O segundo e o maior!\n");
    }
    return 0;
}
// exercicio 5 IF ELSE
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Digite dois numeros:");
    scanf("%i%i", &n1, &n2);
    if( n1 > n2){
        printf("O primeiro e o maior!\n");
    }else{
        if(n2 > n1){
            printf("O segundo e o maior!\n");
        }else{
            printf("Os dois sao iguais!\n");
        }
    }
    return 0;
}
// exercicio 6 IF ELSE
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Digite dois numeros:");
    scanf("%i%i", &n1, &n2);
    if( n1 > n2){
        printf("O primeiro e o maior!\n");
    }else if(n2 > n1){
        printf("O segundo e o maior!\n");
    }else{
        printf("Os dois sao iguais!\n");
    }
    return 0;
}
