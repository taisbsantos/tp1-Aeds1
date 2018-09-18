#include "matriz_voos.h"



int main() {
// Testes de Voo.c//
    int Modo,Exit,ID;
    char Operacao,continuar[10];
    Voo Temporario;
    Matriz_voos Matriz;
    printf("Escolha seu modo de operacao:\n");
    printf("1) Modo Interativo\n");
    printf("2) Modo Arquivo\n");
    scanf("%d",&Modo);
    if (Modo==1){
        while(Exit!=1){
            printf("Escolha qual operacao voce deseja efetuar:\n");
            printf("A) Inicializar Matriz\n");
            printf("B) Inserir item na Matriz\n");
            printf("C) Remover voo da Matriz usando o ID\n");
            printf("D) Procurar um voo na Matriz\n");
            printf("E) Imprimir voos, dados horario de decolagem e horario de pouso previsto\n");
            printf("F) Imprimir voos, dado horario de decolagem apenas\n");
            printf("G) Imprimir voos, dado horario previsto de pouso apenas.\n");
            printf("H) Imprimir toda a Matriz\n");
            printf("I) Encontrar faixa de horario de decolagem e previsao de pouso com maior numero de voos cadastrados\n");
            printf("J) Encontrar faixa de horario de decolagem e previsao de pouso com menor numero de voos cadastrados\n");
            printf("K) Encontrar lista de voos mais recentemente alterada\n");
            printf("L) Encontrar lista de voos menos recentemente alterada. \n");
            printf("M) Verificar se matriz e esparca\n");
            printf("X) Sair\n");
            scanf("%c",&Operacao);
            printf("A operacao escolhida foi: %c\n",Operacao);

            // Operação da Inicializar a Matriz//
            if(Operacao=='A' || Operacao=='a'){
                Inicializar_Matriz(&Matriz);
                printf("Matriz Inicializada!\n");
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação de Inserir na Matriz//
            if(Operacao=='B' || Operacao=='b'){
                printf("Digite a hora de decolagem:\n");
                scanf("%s",&Temporario.hora_decolagem);
                printf("Digite a hora de previsao de pouso:\n");
                scanf("%s",&Temporario.hora_previsao_pouso);
                printf("Digite o aeroporto de decolagem:\n");
                scanf("%s",&Temporario.aeroporto_decolagem);
                printf("Digite o aeroporto de pouso\n");
                scanf("%s",&Temporario.aeroporto_pouso);
                printf("Digite o ID da pista de decolagem:\n");
                scanf("%d",&Temporario.id_pista_decolagem);
                Inserir_Elementos_Matriz(&Matriz,Temporario);
                printf("Item inserido com sucesso!\n");
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Remover voo da Matriz//
            if(Operacao=='C' || Operacao=='c'){
                printf("Digite o ID do item a ser removido:\n");
                scanf("%d",&ID);
                Remover_Voo_Matriz(&Matriz,ID);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação procura de voo na Matriz //
            if(Operacao=='D' || Operacao=='d'){
                printf("Digite o ID do voo a ser procurado:\n");
                scanf("%d",&ID);
                Procurar_Voo_Matriz(&Matriz,ID);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação Imprimir voos, com hora de decolagem e previsão de pouso //
            if(Operacao=='E' || Operacao=='e'){
                printf("Digite a hora de decolagem:\n");
                scanf("%s",&Temporario.hora_decolagem);
                printf("Digite a hora de previsao de pouso:\n");
                scanf("%s",&Temporario.hora_previsao_pouso);
                Imprime_Matriz_DecPouso(&Matriz,&Temporario.hora_decolagem,&Temporario.hora_previsao_pouso);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação Imprimir voos, dado horario de decolagem apenas //
            if(Operacao=='F' || Operacao=='f'){
                printf("Digite a hora de decolagem:\n");
                scanf("%s",&Temporario.hora_decolagem);
                Imprime_Matriz_Dec(&Matriz,&Temporario.hora_decolagem);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }
            // Operação Imprimir voos, dado horario previsto de pouso apenas. //
            if(Operacao=='G' || Operacao=='g'){
                printf("Digite a hora de previsao de pouso:\n");
                scanf("%s",&Temporario.hora_previsao_pouso);
                Imprime_Matriz_Pouso(&Matriz,&Temporario.hora_previsao_pouso);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Printar toda Matriz//
            if(Operacao=='H' || Operacao=='h'){
                Imprime_Matriz_All(&Matriz);
                printf("Matriz printada com sucesso!\n");
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação que retorna a faixa de horário com maior numero de voos//
            if(Operacao=='I' || Operacao=='i'){
                Maior_Quantidade_Voos(&Matriz);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação que retorna a faixa com o menor numero de voos cadastrados//
            if(Operacao=='J' || Operacao=='j'){
                Menor_Quantidade_Voos(&Matriz);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);

            }

            // Operação que retorna a lista de voo mais recente //
            if(Operacao=='K' || Operacao=='k'){
                Matriz_Ultima_Alteracao(&Matriz);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação que retorna a lista de voo menos recente//
            if(Operacao=='L' || Operacao=='l'){
                Matriz_primeira_Alteracao(&Matriz);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Operação de verificação se a Matriz é esparça//
            if(Operacao=='M' || Operacao=='m'){
                Matriz_esparca(&Matriz);
                printf("Pressione alguma tecla para continuar\n");
                scanf("%s",&continuar);
            }

            // Saida do loop//
            if(Operacao=='x' || Operacao=='X'){
                printf("\nFim do codigo\n");
                Exit==1;
                break;}
        }

    }
    return 0;
}