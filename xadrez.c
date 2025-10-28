#include <stdio.h>

int main() {

//Mover a torre 5 casas para a direita.

    for (int i = 0; i < 5;  i++) {
        printf("Direita\n"); // Imprimir a direção do movimento da Torre.   
    }

//Mover o Bispo 5 casas na diagonal para cima à direita.
    
    int i = 1; 

        while (i <=5) {
            printf("Cima,Direita\n"); // Imprimir a direção do movimento do Bispo.
            i++;
    }

//Mover a Rainha 8 casas para a esquerda.
        i = 1;
        do {

            printf("Esquerda\n"); // Imprime a direção do movimento da rainha.

            i++;

    }while (i <= 8);

    
        


//Declarar variáveis para movimento cavalo.

    int movimentoCompelto = 1; 
    
    while (movimentoCompelto--)

    {
        for (int i = 0; i < 2; i++) {
             printf("Baixo\n");//Imprime "Baixo" duas vezes.
        }

    printf("Esquerda\n");//Imprime "Esquerda" uma vez.
    
    }

    return 0;
        

}



