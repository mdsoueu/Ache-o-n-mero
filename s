#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //int numerosecreto = 49;
    srand(time(0));
    int numerosecreto = rand() % 100;
    int chute;
    
    printf("***********************\n");
    printf("**Jogo da Adivinhação**\n");
    printf("***********************\n\n");
    
    // printf("%d\n\n", numerosecreto);

    printf("Os números são de 0 a 100.\n");
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
