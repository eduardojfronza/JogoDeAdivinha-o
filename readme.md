---

# Jogo de Adivinhação em C

Bem-vindo ao nosso jogo de adivinhação em C, onde o objetivo é adivinhar o número secreto! Aqui está toda a docuemntação da construção do projeto, desde do começo do projeto.

- **Começando a programar**
    
    é um comando básico para mostrar coisas na tela
    
    ```jsx
    // Importando uma pacote para pegar as coisas que forem digitas no teclado
    #include <stdio.h> 
    
    // Função padrão em C
    int main() {
    // Comando para mostrar na tela
        printf("Bem vindo ao nosso jogo de adivinhação");
    };
    ```
    
    no terminal, vamos inicar o gcc
    
    ```jsx
    gcc index.c -o index.out
    //gcc = Incia o gcc
    // index.cs = o nomoe do arquivo
    // -o = para dizer onde vai executar o codigo
    // index.out = o nome do arquivo que vai sair
    ```
    
    quando digitarmos ./index.out vai aparecer no terminal o que escrevemos (./index.out porque estavamos no outro arquivo)
    
- **Lidando com erros**
    
    para dar espaço usamos o \n
    
    ```jsx
    #include <stdio.h> 
    
    int main() {
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
    };
    ```
    
- **Guardando o número secreto**
    
    para definir uma varivel inteira em c usamos o int
    
    ```jsx
    #include <stdio.h> 
    
    int main() {
    
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numeroSecreto = 42;
    };
    ```
    
    para printar usamos assim:
    
    ```jsx
    // Definido uma variavel do tipo inteiro 
        int numeroSecreto = 42;
    
     // Para printar usamos o %d para inteiro e no final passamos a variavel
        printf("O número %d é o secreto!" , numeroSecreto);
    ```
    
- **Chutando números**
    
    para pegarmos a informação do que o usuario digitou usamos o scanf:
    
    ```jsx
    // Variavel para armazenar o chute
    int chute;
    
    // Mensagem para o usuario escrever o seu chute
    printf("Qual é seu chute? \n");
    
    // Para pegar o valor digitado, a logica é a mesma para printar uma variavel
    scanf("%d", &chute);
    ```
    
- **Definindo condições**
    
    para fazer uma condicional em c podemos usar:
    
    ```jsx
    #include <stdio.h> 
    
    int main() {
        int numeroSecreto = 42;
    
        int chute;
    
        printf("Qual é seu chute? \n");
        scanf("%d", &chute);
    
        printf("Voceê errou!");
    
        if(chute == numeroSecreto){
            printf("Parabens! Você acertou! \n");
            printf("Jogue denovo, você é um bom jogador! \n");
        } else {
            printf("Voce errou!");
        }
    };
    ```
    
- ****If e else****
    
    é possivel fazer varios ifs dentro de um if
    
    ```jsx
    if(chute == numeroSecreto){
            printf("Parabens! Você acertou! \n");
            printf("Jogue denovo, você é um bom jogador! \n");
        } 
        else {
            if (chute > numeroSecreto)
            {
                printf("Seu chute foi maior que o numero secreto! \n");
            }
    
            if (chute < numeroSecreto)
            {
                printf("Seu chute é menor que o numero secreto \n");
            }
            
            printf("Voce errou!");
        }
    ```
    
- **Variações no código**
    
    podemos melhorar a leitura do codigo, fazendo assim:
    
    ```jsx
    #include <stdio.h> 
    
    int main() {
    
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numeroSecreto = 42;
    
        int chute;
    
        printf("Qual é seu chute? \n");
        scanf("%d", &chute);
    
        int acertou = (chute == numeroSecreto);
    
        if(acertou){
            printf("Parabens! Você acertou! \n");
            printf("Jogue denovo, você é um bom jogador! \n");
        } 
        else {
            int maior = (chute > numeroSecreto);
    
            if (maior)
            {
                printf("Seu chute foi maior que o numero secreto! \n");
            } 
            else {
                printf("Seu chute foi menor que o numero secreto! \n");
            }
    
            printf("Voce errou!");
        }
    };
    ```
    
- **Limitando os chutes**
    
    um for basico é assim:
    
    ```jsx
    for (int i = 1;  i <= 3; i++) {}
    ```
    
    para podermos aumentar a quntidade de chances para o usuario acertar podemos fazer assim:
    
    ```jsx
    #include <stdio.h> 
    
    int main() {
    
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numeroSecreto = 42;
    
        int chute;
    
        for (int i = 1;  i <= 3; i++) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d de 3 \n", i);
            scanf("%d", &chute);
    
            int acertou = (chute == numeroSecreto);
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
    						break
            } 
            else {
                int maior = (chute > numeroSecreto);
    
                if (maior)
                {
                    printf("Seu chute foi maior que o numero secreto! \n");
                } 
                else {
                    printf("Seu chute foi menor que o numero secreto! \n");
                }
    
                printf("Voce errou!");
            }
        }
        printf("Fim de jogo, suas chances acabaram! \n");
    };
    ```
    
- **Deixando o código mais legível**
    
    para definir uma constante usamos o:
    
    ```jsx
    #define NUMERO_DE_TENTATIVAS 5
    ```
    
    agora, podemos substituir o numero que estava no for por uma constante:
    
    ```jsx
    #include <stdio.h> 
    
    #define NUMERO_DE_TENTATIVAS 5
    
    int main() {
    
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numerosecreto = 42;
        int chute;
    
        for (int i = 1;  i <= NUMERO_DE_TENTATIVAS; i++) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
            scanf("%d", &chute);
    
            int acertou = (chute == numerosecreto);
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
            else {
                int maior = (chute > numerosecreto);
    
                if (maior)
                {
                    printf("Seu chute foi maior que o numero secreto! \n");
                } 
                else {
                    printf("Seu chute foi menor que o numero secreto! \n");
                }
    
                printf("Voce errou!");
            }
        }
        printf("Fim de jogo! \n");
    };
    ```
    
- **Ifs e elses**
    
    podemos melhorara nosso codigo usando o else if:
    
    ```jsx
    #include <stdio.h> 
    
    #define NUMERO_DE_TENTATIVAS 5
    
    int main() {
    
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numerosecreto = 42;
        int chute;
    
        for (int i = 1;  i <= NUMERO_DE_TENTATIVAS; i++) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
            scanf("%d", &chute);
    
            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi maior que o secreto! \n");
            }
        }
        printf("Fim de jogo! \n");
    };
    ```
    
- ****************Continue****************
    
    o continue é usado para continuar o funcionamento do codigo sem quebrar o restante
    
    ```jsx
    #include <stdio.h> 
    
    // Definido uma variavel do tipo constante 
    #define NUMERO_DE_TENTATIVAS 5
    
    int main() {
    
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numerosecreto = 42;
        int chute;
    
        // Laço de reptição para definir o numero de tentativas 
        for (int i = 1;  i <= NUMERO_DE_TENTATIVAS; i++) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d de %d \n", i, NUMERO_DE_TENTATIVAS);
            // Para pegar o valor do input
            scanf("%d", &chute);
    
            // Para não continuar se preencher valores negativos
            if(chute < 0) {
                printf("Você não pode chutar numeros negativos!");
                i--;
    
                // Assim não vai parar o looping, vai direto para a proxima interação sem matar o resto do codigo
                continue;
            }
    
            // Variaves para deixar o codigo mais legivel
            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi maior que o secreto! \n");
            }
        }
        printf("Fim de jogo! \n");
    };
    ```
    
- **Mais refatorações**
    
    para deixarmos infinito até acertar usamos o while:
    
    ```jsx
    #include <stdio.h> 
    
    int main() {
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numerosecreto = 42;
        
        int chute;
        int tentativas = 1;
    
        // Laço de reptição para as tentativas 
        while (1) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d \n", tentativas);
            // Para pegar o valor do input
            scanf("%d", &chute);
    
            // Para não continuar se preencher valores negativos
            if(chute < 0) {
                printf("Você não pode chutar numeros negativos!");
    
                // Assim não vai parar o looping, vai direto para a proxima interação sem matar o resto do codigo
                continue;
            }
    
            // Variaves para deixar o codigo mais legivel
            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            tentativas++;
        }
        printf("Fim de jogo! \n");
        printf("Voce acertou na tentativa %d \n", tentativas);
    };
    ```
    

- **Acrescentando pontuações**
    
    para criar marcar os pontos vamos criar uma variavel chamada pontos:
    
    ```c
    int pontos = 1000;
    ```
    
    depois no final do looping vamos calcular:
    
    ```c
    int pontosperdidos = (chute - numerosecreto) / 2;
    pontos = pontos - pontosperdidos;
    ```
    
    o codigo deve ficar assim:
    
    ```c
    #include <stdio.h> 
    
    int main() {
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numerosecreto = 42;
        
        int chute;
        int tentativas = 1;
    
        int pontos = 1000;
    
        // Laço de reptição para as tentativas 
        while (1) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d \n", tentativas);
            // Para pegar o valor do input
            scanf("%d", &chute);
    
            // Para não continuar se preencher valores negativos
            if(chute < 0) {
                printf("Você não pode chutar numeros negativos!");
    
                // Assim não vai parar o looping, vai direto para a proxima interação sem matar o resto do codigo
                continue;
            }
    
            // Variaves para deixar o codigo mais legivel
            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            tentativas++;
    
            int pontosperdidos = (chute - numerosecreto) / 2;
            pontos = pontos - pontosperdidos;
        }
        printf("Fim de jogo! \n");
        printf("Voce acertou na tentativa %d \n", tentativas);
        printf("Total de pontos: %d", pontos);
    };
    ```
    
- **Trabalhando com casas decimais**
    
    para trabalharmos com numeros com virgula usamos o:
    
    ```c
    double pontos = 1000;
    
    double pontosperdidos = (chute - numerosecreto) / 2;
    
    // É preciso mudar o printf de %d para %f, para aceitar numero decimal
    printf("Total de pontos: %f", pontos);
    
    // Para definir as casas decimais usamos o %.1f
    printf("Total de pontos: %.1f", pontos);
    ```
    
- **Outras variáveis**
    
    temos algumas alternativas de variaveis, que são elas:
    
    - short = 2 bytes =
    - int = 4 bytes = 32 bits = 2³²
    - long = 8 bytes = 64 bits = 2⁶⁴
    - double = 8 bytes
    - float = 4 bytes
- **Convertendo tipos de variáveis**
    
    para converter um int em double ou vice-versa podemos fazer assim:
    
    ```c
    #include <stdio.h>
    
    int main() {
    
        int a = 3;
        int b = 2;
        double pontos = 3 / (double)b;
        printf("%f\n", pontos);
    
    }
    ```
    
- **Outras funções**
    
    para converter numero negativos em positivos podemos usar a função abs, dessa forma:
    
    ```c
    #include <stdlib.h>
    
    double pontosperdidos = abs((chute - numerosecreto)) / 2.0;
    ```
    
    no fim o codigo fica assim:
    
    ```c
    #include <stdio.h> 
    #include <stdlib.h>
    
    int main() {
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Definido uma variavel do tipo inteiro 
        int numerosecreto = 42;
        
        int chute;
        int tentativas = 1;
    
        double pontos = 1000;
         
    
        // Laço de reptição para as tentativas 
        while (1) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d \n", tentativas);
            // Para pegar o valor do input
            scanf("%d", &chute);
    
            // Para não continuar se preencher valores negativos
            if(chute < 0) {
                printf("Você não pode chutar numeros negativos!");
    
                // Assim não vai parar o looping, vai direto para a proxima interação sem matar o resto do codigo
                continue;
            }
    
            // Variaves para deixar o codigo mais legivel
            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            tentativas++;
    
            double pontosperdidos = abs((chute - numerosecreto)) / 2.0;
            pontos = pontos - pontosperdidos;
        }
        printf("Fim de jogo! \n");
        printf("Voce acertou na tentativa %d \n", tentativas);
        printf("Total de pontos: %.1f", pontos);
    };
    ```
    
- F**unções rand e srand**
    
    agora vamos tornar o numero secreto aleatorio
    
    ```c
    int numeroaleatorio = rand();
    
    // Definido uma variavel do tipo inteiro 
    int numerosecreto = numeroaleatorio % 100;
    ```
    
    porem ele não muda, quando acabarmos o jogo. Para fazermos ficar diferente usamos a função srand();
    
    ```c
    // Faz com que muda o numero aleatorio com base nos segundos atuais.
     int segundos = time(0);
     srand(segundos);
    ```
    
    no fim o codigo fica assim:
    
    ```c
    #include <stdio.h> 
    #include <stdlib.h>
    #include <time.h>
    
    int main() {
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Faz com que muda o numero aleatorio com base nos segundos atuais.
        int segundos = time(0);
        srand(segundos);
    
        // Gera um numero aleatorio
        int numeroaleatorio = rand();
    
        // Calcula o resto da divisão para sempre ser um numero entre 0 e 99 
        int numerosecreto = numeroaleatorio % 100;
        
        int chute;
        int tentativas = 1;
    
        double pontos = 1000;
         
    
        // Laço de reptição para as tentativas 
        while (1) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d \n", tentativas);
            // Para pegar o valor do input
            scanf("%d", &chute);
    
            // Para não continuar se preencher valores negativos
            if(chute < 0) {
                printf("Você não pode chutar numeros negativos!");
    
                // Assim não vai parar o looping, vai direto para a proxima interação sem matar o resto do codigo
                continue;
            }
    
            // Variaves para deixar o codigo mais legivel
            int acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                printf("Parabens! Você acertou! \n");
                printf("Jogue denovo, você é um bom jogador! \n");
    
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi menor que o secreto! \n");
            }
    
            tentativas++;
    
            double pontosperdidos = abs((chute - numerosecreto)) / 2.0;
            pontos = pontos - pontosperdidos;
        }
        printf("Fim de jogo! \n");
        printf("Voce acertou na tentativa %d \n", tentativas);
        printf("Total de pontos: %.1f", pontos);
    };
    ```
    

- **Acrescentando níveis de dificuldade**
    
    para escolher o nivel de dificuldade podemo usar o switch case:
    
    ```c
    // NUmero de tentativas com base na escolha da dificuldade
        int numerodetentativas;
        switch (nivel)
        {
        case 1:
            numerodetentativas == 20;
            break;
        case 2:
            numerodetentativas == 15;
            break;
        
        default:
            numerodetentativas == 6;
            break;
        }
    ```
    
    no fim o codigo foi ajustado para for, dessa forma:
    
    ```c
    #include <stdio.h> 
    #include <stdlib.h>
    #include <time.h>
    
    int main() {
        // Imprime o cabeçalho do nosso jogo
        printf("******************************************\n");
        printf("* Bem vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
    
        // Faz com que muda o numero aleatorio com base nos segundos atuais.
        int segundos = time(0);
        srand(segundos);
    
        // Gera um numero aleatorio
        int numeroaleatorio = rand();
    
        // Calcula o resto da divisão para sempre ser um numero entre 0 e 99 
        int numerosecreto = numeroaleatorio % 100;
        
        int chute;
        int tentativas = 1;
    
        double pontos = 1000;
    
        int acertou = 0;
    
        // Para escolher o modo de jogo
        int nivel;
        printf("Escolha o nivel de dificuldade: \n");
        printf("(1) Fácil (2) Médio (3) Difícil \n\n");
        scanf("%d", &nivel);
    
        // NUmero de tentativas com base na escolha da dificuldade
        int numerodetentativas;
        switch (nivel)
        {
        case 1:
            numerodetentativas == 20;
            break;
        case 2:
            numerodetentativas == 15;
            break;
        
        default:
            numerodetentativas == 6;
            break;
        }
        
    
        // Laço de reptição para as tentativas 
        for (int i = 0; i <= numerodetentativas; i++) {
            printf("Qual é seu chute? \n");
            printf("Tentativa %d \n", tentativas);
            // Para pegar o valor do input
            scanf("%d", &chute);
    
            // Para não continuar se preencher valores negativos
            if(chute < 0) {
                printf("Você não pode chutar numeros negativos!");
    
                // Assim não vai parar o looping, vai direto para a proxima interação sem matar o resto do codigo
                continue;
            }
    
            // Variaves para deixar o codigo mais legivel
            acertou = chute == numerosecreto;
            int maior = chute > numerosecreto;
    
            if(acertou){
                break;
            } 
    
            else if(maior) {
                printf("Seu numero foi maior que o secreto! \n");
            }
    
            else {
                printf("Seu numero foi menor que o secreto! \n");
            }
    
            tentativas++;
    
            double pontosperdidos = abs((chute - numerosecreto)) / 2.0;
            pontos = pontos - pontosperdidos;
        }
    
        printf("Fim de jogo! \n");
        
        if (acertou) {
            printf("Voce acertou na tentativa %d \n", tentativas);
            printf("Total de pontos: %.1f", pontos);
        } else {
            printf("Você perdeu, tente denovo \n");
        }
    
    };
    ```
    
- **Jogo finalizado**
```c
   // incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprimindo cabecalho bonito do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    // declarando variaveis que serao usadas mais a frente
    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;

    // definindo a quantidade de pontos inicial
    double pontos = 1000;

    // gerando um numero secreto aleatorio
    srand(time(0));
    int numerosecreto = rand() % 100;

    // escolhendo o nivel de dificuldade
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    switch(nivel) {
        case 1: 
            totaldetentativas = 20;
            break;
        case 2:
            totaldetentativas = 15;
            break;
        default:
            totaldetentativas = 6;
            break;
    }

    // loop principal do jogo
    for(int i = 1; i <= totaldetentativas; i++) {

        printf("-> Tentativa %d de %d\n", i, totaldetentativas);

        printf("Chute um número: ");
        scanf("%d", &chute);

        // tratando chute de numero negativo
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            i--;
            continue;
        }

        // verifica se acertou, foi maior ou menor
        acertou = chute == numerosecreto;

        if(acertou) {
            break;
        } else if(chute > numerosecreto) {
            printf("\nSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o número secreto!\n\n");
        }

        // calcula a quantidade de pontos
        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

        printf("\nVocê perdeu! Tente novamente!\n\n");
    }


}
´´´
