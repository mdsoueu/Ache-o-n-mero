#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // int numerosecreto = 49;
  srand(time(0));
  int numerosecreto = rand() % 50;
  int chute;
  int dificuldade; /* Guarda de 1 a 5 */
  int chance = 0;
  int fase = 1;

  printf("\t***********************\n");
  printf("\t***  ACHE O NÚMERO  ***\n");
  printf("\t***********************\n");

  // printf("%d\n\n", numerosecreto); /* Mostra o meu número sortido */

  do {
    printf("\nEscolha o nível de dificuldade:\n");
    printf(" 1 - Insano (1 chance)\n");
    printf(" 2 - Difícil (2 chances)\n");
    printf(" 3 - Médio (3 chances)\n");
    printf(" 4 - Fácil (4 chances)\n");
    printf(" 5 - Noob (5 chances)\n");
    printf("Entre 1 e 5: ");
    scanf("%d", &dificuldade);
  } while (dificuldade < 1 || dificuldade > 5);

  do {
    printf("\nVocê tem %d de %d chances.\n", (dificuldade - chance),
           dificuldade);
    printf("Digite um número inteiro: ");
    scanf("%d", &chute);

    if (numerosecreto == chute) { /* Início do if-else */
      printf("\n** Parabéns! Você acertou! O número secreto é %d. **\n",
             numerosecreto);
      printf("\nTente chegar até a fase 5, se possível!\n");

      for (int i = 0; i < 5; i++) { /* Inicio do for */
        numerosecreto = rand() % 20;
        printf("%d", numerosecreto); /* Mostra o meu número sortido*/
        printf("\nFase %d", fase);
        printf("\nDigite um número inteiro: ");
        scanf("%d", &chute);
        fase++;
        if (numerosecreto == chute) { /* Início de if-else */
          printf("Parabéns! Você acertou!\n");
        } else {
          printf("Você errou!\nGame over!!");
          return 0;
        } /* Fim do if-else */
      }   /* Fim do for */

    } else {
      printf("Tente novamente!\n");

      if (chute < numerosecreto) { /* Início do if-else */
        printf(" ----------------------------------\n");
        printf("|     Dica -> O número é maior!   |\n");
        printf(" ----------------------------------\n");
        printf("\n");
      } else {
        printf(" ----------------------------------\n");
        printf("|      Dica -> O número é menor!   |\n");
        printf(" ----------------------------------\n");
        printf("\n");
      } /* Fim do if-else */

    }         /* Fim do if-else*/
    chance++; /* Se não tiver fica em laço infinito */
  } while (numerosecreto != chute && chance < dificuldade &&
           fase < 5); /* && dentro do mesmo laço || tbm*/

  printf("\nFim de jogo!!");
}

/* 1º Escolho nível de dificuldade;
 * 2º O jogo começa --> digite o número, a qual eu acredito ser --> aparece a
 * dica e, tento novamente; 3º Caso eu acerte, entro nas fases, se não acaba o
 * jogo;
 *
 * Entrei na fase;
 * 1º Digito o número;
 * 2º Se eu digito o número errado, encerra o programa. Caso eu acerto o número, passa para o próxima fase -- fazendo o teste o número muda; */
