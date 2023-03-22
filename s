#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //int numerosecreto = 49;
    srand(time(0));
    int numerosecreto = rand() % 100;
    int chute;
    int dificuldade;
    
    printf("***********************\n");
    printf("**Jogo da Adivinhação**\n");
    printf("***********************\n\n");
    
    // printf("%d\n\n", numerosecreto);

    do{
      printf("\nEscolha o nível de dificuldade:\n");
        printf(" 1 - Insano (1 chance)\n");
        printf(" 2 - Difícil (2 chances)\n");
        printf(" 3 - Médio (3 chances)\n");
        printf(" 4 - Fácil (4 chances)\n");
        printf(" 5 - Noob (5 chances)\n");
        printf("Digite um número interiro: ");
        scanf("%d", &dificuldade);
    } while (dificuldade<1 || dificuldade>5);

    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &chute);
        
        if (numerosecreto == chute){
            printf("Parabéns! Você acertou!\n");
            printf("O número secreto é: %d\n", numerosecreto);
        }else{
            printf("Errrrrou! Tente novamente!\n");
            
            if(chute<numerosecreto){
                printf("Seu chute foi menor!\n");
            }else{
                printf("Seu chute foi maior!\n");
            }
            
        }
    }while(numerosecreto != chute);

    printf("Fim de jogo!");
}