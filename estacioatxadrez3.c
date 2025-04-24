
#include <stdio.h> //o codigo consiste em simular o movimento de peças de xadrez com baseem suas direções (direita, equerda, cima e baixo)

void torreconfig(int torre){  //função da torre, movendo-se para direita 5 vezes 
   do{
      printf("DIREITA\n");
      torre++;
   } while (torre <= 5);
}

void rainhaconfig(int rainha){ //função da rainha, movendo-se esquerda
   while (rainha <= 5){
      printf("ESQUERDA\n");
      rainha++;
   }
}
void bispoconfig(int bispo){ //função do bispo movendo-se para cima e direita
   for (bispo = 1; bispo <= 5; bispo++)
   {
      printf("CIMA-");
      if(bispo <= 5){;
         printf("DIREITA\n");
      }
   }
}

void cavaloconfig(int cavalo){ //função do cavalo, movendo-se 2 vezes para baixo e uma para esquerda
   for (cavalo = 1; cavalo <= 9; cavalo++)
   {
      if (cavalo % 3 == 0){
      printf("DIREITA\n");
   }
      else if (cavalo <= 9){
         printf("CIMA\n");
   }
   
}
}

int main() { //identificação dos valores para cada função junto de suas incializações
int torre = 1;
int rainha = 1;
int bispo = 1;
int cavalo = 1;
printf("MOVIMENTO TORRE:\n");
torreconfig(torre);
printf("\n");
printf("MOVIMENTO RAINHA:\n");
rainhaconfig(rainha);
printf("\n");
printf("MOVIMENTO BISPO:\n");
bispoconfig(bispo);
printf("\n");
printf("MOVIMENTO CAVALO:\n");
cavaloconfig(cavalo);
return 0;
}