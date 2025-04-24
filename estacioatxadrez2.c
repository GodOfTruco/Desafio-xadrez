
#include <stdio.h> //o codigo consiste em simular o movimento de peças de xadrez com baseem suas direções (direita, equerda, cima e baixo)


int main() {
int torre, rainha= 1, bispo = 1, cavalo = 1; // implementação de valores padrões para acrescimo e representação do movimento das peças

for (torre = 1; torre <= 5; torre++) //representação da peça torre, movendo-se para direita 5 vezes 
printf ("direita\n");
printf("\n");

do
{
printf("Cima, direira\n"); //representação da peça bispo, movendo-se para cima e direita
bispo++;
} while (bispo <= 5);
printf("\n");

while (rainha <= 5){ //representação da peça rainha, movendo-se para esquerda
rainha++;
}
printf("\n");

for (cavalo = 1; cavalo <= 2; cavalo++){ //representação da peça cavalo, movendo-se 2 vezes para baixo e uma para esquerda
    printf("baixo\n");
}
    do{
       printf("esquerda\n");
} while (cavalo == 2);


return 0;
}
