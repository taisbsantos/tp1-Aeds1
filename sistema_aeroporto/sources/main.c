#include <stdio.h>
#include "../heads/lista_de_voos.h"
int main() {
    int opcao_TAD;
     printf("         Sistema Aeroporto!\n");
     printf("-------------------------------------\n");
     printf("Selecione o que você deseja acessar:\n1-Voo \n2-Lista de Voos\n3-Item da matriz\n4-Matriz de Vooos\n");
     scanf("%d",&opcao_TAD);
     printf("-------------------------------------\n");
     switch (opcao_TAD){
         case 1:
             printf("menu voo");
         case 2:
             printf("menu lista");
         case 3:
             printf("menu item");
         case 4:
             printf("menu matriz");
     }
    return 0;
}