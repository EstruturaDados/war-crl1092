#include <stdio.h>
#include <string.h>

//struct dos territórios para o jogo no nivel iniciante.
struct territorios {
      char pais[20];
      char cor[10];
      int tropa;
};

int main () {
    struct territorios mapa[5]; //declaaração de uma variavel do tipo rettirórios para ser usada mais tarde.

    //sistema de cadastro dos territórios para o nivel iniciante.  
    printf("===== Cadastro dos territórios =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do pais %d: ", i + 1);
        fgets(mapa[i].pais, 20, stdin);
        mapa[i].pais[strcspn(mapa[i].pais, "\n")] = '\0';

        printf("\nDigite a cor das tropas: ");
        fgets(mapa[i].cor, 10, stdin);
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0';
    
        printf("\nDigite a quantidade das tropas: ");
        scanf("%d",&mapa[i].tropa);
        getchar(); 
    }
    
    //sistema de exibição do mapa do jogo no nivel iniciante.

    printf("\n===== EXIBINDO O MAPA ATUAL DO JOGO =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\nNome do Território: %s \nCor do território: %s\nNúnero de Tropas do território: %d\n",i + 1, mapa[i].pais, mapa[i].cor, mapa[i].tropa);
    }


}
