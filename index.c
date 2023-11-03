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

        double pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
    printf("Fim de jogo! \n");
    printf("Voce acertou na tentativa %d \n", tentativas);
    printf("Total de pontos: %.1f", pontos);
};
