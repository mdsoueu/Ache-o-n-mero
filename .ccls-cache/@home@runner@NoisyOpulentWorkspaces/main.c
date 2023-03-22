#include <stdio.h>
/* Game --> adivinhação / de 1-100 */

int main(void) {
  
  int numero_secreto = 17; /* Posso escolher atribuir um valor para essa variável ou não*/ 
  int chute; /* Tenho que tomar cuidado, pois posso ter um retorno que seja lixo eletrônico */

  /* Caso meu chute seja igual ao número secreto, irá aparecer a mensagem "Verdadeiro" "Fim do jogo!".
   * Caso meu chute seja diferente do número secreto, irá aparecer "Falso" "Fim de jogo!" 
   * Caso deixe minha variável 'chute' sem uma atribuição, a mensagem que aparece é "Falso" "Fim de jogo!. "*/
  
  /* Estrutura condicional -- if / if-else / if-else-if */

  /*printf("\n\nDigite um número: ");
  scanf("%d", &chute);*/

  if(numero_secreto == chute){
    printf("Verdadeiro\n");
  } else {
    printf("Falso\n");
  }
  printf("Fim do jogo!");
}