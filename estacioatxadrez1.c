#include <stdio.h> //o codigo consiste em simular o movimento de peças de xadrez com baseem suas direções (direita, equerda, cima e baixo)


int main() {
int torre, rainha = 1, bispo = 1; //implementação de valores para o acrescimo do mesmo 

for (torre = 1; torre <= 5; torre++) //acrescimo do valor da torre em função de gerar uma representação de movimento para direita
printf ("direita\n");
printf("\n");

do
{
printf("Cima, direira\n"); //acrescimo do valor do bispo em função de gerar uma representação de movimento para cima e para direita
bispo++;
} while (bispo <= 5);
printf("\n");

while (rainha <= 5){ //acrescimo do valor da rainha em função de gerar uma representação de movimento para esquerda
printf("Esquerda\n");
rainha++;
}
printf("\n");
return 0;
}
