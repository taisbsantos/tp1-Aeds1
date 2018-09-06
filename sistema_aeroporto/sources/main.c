#include <stdio.h>
#include "../sources/voo.c"
int main() {
    int opcao_TAD;
    Voo i;
     printf("         Sistema Aeroporto!\n");
     printf("-------------------------------------\n");
     printf("Selecione o que você deseja acessar:\n1-Voo \n2-Lista de Voos\n3-Item da matriz\n4-Matriz de Vooos\n");
     scanf("%d",&opcao_TAD);
     printf("-------------------------------------\n");
     switch (opcao_TAD){
         case 1:
             printf("menu voo\n");
             get_id_voo(&i);
         case 2:
             printf("menu lista\n");
         case 3:
             printf("menu item\n");
         case 4:
             printf("menu matriz\n");
     }
    return 0;
}