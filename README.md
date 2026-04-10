#  **Resumo para Prova – Linguagem C**

---

##  **O que vai cair na prova**

Você precisa saber:

* Criar variáveis
* Ler dados (`scanf`)
* Mostrar resultados (`printf`)
* Fazer cálculos
* Tomar decisões com `if`

---

## 🔹 **1. Variáveis e Constantes**

###  Variáveis

Guardam valores que podem mudar.

```c
int idade = 18;       // inteiro
float altura = 1.75;  // decimal
char letra = 'A';     // caractere
```

 Regras importantes:

* `char` usa `' '`
* `float` usa ponto (1.75)
* Sempre declarar antes de usar

---

###  Constantes

Não mudam durante o programa.

```c
const int ANO = 2025;
```

---

## 🔹 **2. Entrada e Saída**

###  Saída → `printf()`

```c
printf("Olá");
printf("Idade: %d", idade);
printf("Altura: %.2f", altura);
```

 Formatos:

* `%d` → inteiro
* `%f` → float
* `%c` → char

---

###  Entrada → `scanf()`

```c
scanf("%d", &idade);
scanf("%f", &altura);
scanf(" %c", &letra);
```

Cuidado na prova:

* Sempre usar `&`
* Espaço antes de `%c`

---

## 🔹 **3. Operadores Aritméticos**

| Operador | Função        |
| -------- | ------------- |
| +        | soma          |
| -        | subtração     |
| *        | multiplicação |
| /        | divisão       |
| %        | resto         |

```c
int a = 10, b = 3;
int r = a % b; // 1
```

 Divisão inteira:

```c
int x = 5 / 2; // resultado = 2
```

---

## 🔹 **4. Estrutura de Seleção (if / else)**

Usada para decisões.

```c
if (idade >= 18) {
    printf("Maior de idade");
} else {
    printf("Menor de idade");
}
```

---

### 🔸 Com mais condições:

```c
if (nota >= 7) {
    printf("Aprovado");
} else if (nota >= 5) {
    printf("Recuperação");
} else {
    printf("Reprovado");
}
```

---

## 🔹 **5. Operadores Relacionais**

| Operador | Significado    |
| -------- | -------------- |
| >        | maior          |
| <        | menor          |
| >=       | maior ou igual |
| <=       | menor ou igual |
| ==       | igual          |
| !=       | diferente      |

---

## 🔹 **6. Operadores Lógicos**

| Operador | Significado |                                                |
| -------- | ----------- |                                                |
| &&       | and E       |  verdadeiro se todas forem verdadeiras         |
| \|\|     | ou OR       |  verdadeiro se pelo menos uma for verdadeira   |
| !        | not NÃO     |  inverte o valor lógico                        |

---

## 🔹  **Exemplos estão todos nas pastas **



##  **Erros que MAIS caem na prova**

❌ Esquecer `;`
❌ Usar `=` no lugar de `==`
❌ Esquecer `&` no `scanf`
❌ Errar tipo (`int`, `float`, `char`)

---

##  **Dicas finais (importante!)**

✔ Leia o problema com calma
✔ Identifique:

* entrada (scanf)
* processamento (contas / if)
* saída (printf)

✔ Teste mentalmente antes de responder

